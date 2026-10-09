import rclpy
import math

from rclpy.node import Node
from rclpy.qos import ( QoSProfile, ReliabilityPolicy, DurabilityPolicy )
from std_msgs.msg import Float32
from interfaces_sistema.srv import ResetTemperatura

class TemperaturaNode (Node):

    def __init__(self):

        super().__init__('temperatura_node')

        self.k = 0

        # Definindo a Quality of Service do Nó de temperatura
        qos = QoSProfile(
            depth = 10,
            reliability = ReliabilityPolicy.BEST_EFFORT,
            durability = DurabilityPolicy.VOLATILE
        )

        # Criando o publisher
        self.publisher = self.create_publisher(
            Float32,
            '/temperatura',
            qos
        )

        # Criando o parametro
        self.declare_parameter(
            'temperatura',
            20.0
        )

        self.temperatura = self.get_parameter('temperatura').value

        # Criando o timer
        self.timer = self.create_timer(
            1.0,
            self.publicar_temperatura
        )

        # Criando o service para resetar o parametro
        self.srv = self.create_service(
            ResetTemperatura,
            '/reset_temperatura',
            self.callback_reset_temperatura
        )


    def publicar_temperatura(self):

        msg = Float32()

        msg.data = self.temperatura

        self.publisher.publish(msg)

        self.get_logger().info(
            f'Temperatura: {msg.data}ºC'
        )

        theta = 2 * self.k * math.pi
        self.temperatura += self.temperatura * math.sin(theta)

        self.k += 0.1


    def callback_reset_temperatura(self, request, response):

        self.temperatura = 20.0

        response.sucesso = True
        response.saida = f'Temperatura redefinida para 20.0 ºC'

        return response


def main(args=None):
    rclpy.init(args=args)
    node = TemperaturaNode()
    rclpy.spin(node)
    node.destroy_node()
    rclpy.shutdown()


if __name__=='__main__':
    main()
