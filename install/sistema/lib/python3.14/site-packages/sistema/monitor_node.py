import rclpy

from rclpy.node import Node
from rclpy.qos import ( QoSProfile, ReliabilityPolicy, DurabilityPolicy )
from std_msgs.msg import Float32



class MonitorNode(Node):

    def __init__(self):
        super().__init__('monitor_node')

        qos = QoSProfile(
            depth = 10,
            reliability = ReliabilityPolicy.BEST_EFFORT,
            durability = DurabilityPolicy.VOLATILE
        )

        self.subscription = self.create_subscription(
            Float32,
            '/temperatura',
            self.callback_temperatura,
            qos
        )


    def callback_temperatura(self, msg):

        self.get_logger().info(
            f'Recebido: {msg.data}ºC'
        )


def main(args=None):
    rclpy.init(args=args)

    node = MonitorNode()

    rclpy.spin(node)

    node.destroy_node()

    rclpy.shutdown()


if __name__ == '__main__':
    main()
