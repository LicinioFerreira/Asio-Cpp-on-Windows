cmake_minimum_required(VERSION 3.12)

project(asio)

add_definitions(-DASIO_STANDALONE -D_WIN32_WINNT=0x0501) 
include_directories(C:\\Users\\User\\Desktop\\Asio\\asio-1.28.0\\asio-master\\asio\\include)
link_libraries(ws2_32 wsock32)
add_executable(asio main.cpp)


