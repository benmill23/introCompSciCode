cmake_minimum_required(VERSION 3.6)
project(AlgorithmsProject1)

set(CMAKE_CXX_STANDARD 11)

set(SOURCE_FILES main.cpp PQueue.h PQueueUVe.cpp PQueueUVe.h PQueueOV.cpp PQueueOV.h PQueueOL.cpp PQueueOL.h PQueueUV.cpp PQueueUV.h PQueueHV.cpp PQueueHV.h PQueuePQ.cpp PQueuePQ.h MyTimer.h)
add_executable(AlgorithmsProject1 ${SOURCE_FILES})