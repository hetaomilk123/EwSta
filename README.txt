# test grpc + protobuf, construct a simple service [2021/09/07/hetaomilk, add]

1. 执行脚本generate_code_from_proto_file.sh, 生成代码
2. make
3. 运行./server启动service，在另一个端口运行./client 打印出：client received: Hello world表示两边已通，grpc+protobuf 搭建完成
