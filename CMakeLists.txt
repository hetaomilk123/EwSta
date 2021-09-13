cmake_minimum_required(VERSION 3.10)

project(test_hello)

find_package(Protobuf CONFIG REQUIRED)

find_package(gRPC CONFIG REQUIRED)

find_package(Threads)

add_executable(server server.cc example.grpc.pb.cc  example.grpc.pb.h  example.pb.cc  example.pb.h)

target_link_libraries(server gRPC::grpc++)

add_executable(client client.cc example.grpc.pb.cc  example.grpc.pb.h  example.pb.cc  example.pb.h)

target_link_libraries(client gRPC::grpc++)
