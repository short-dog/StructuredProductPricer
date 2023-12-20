cmake_minimum_required(VERSION 3.27)
project(StructuredProductPricing)

set(CMAKE_CXX_STANDARD 23)

include_directories(.)

add_executable(StructuredProductPricing main/main.cpp
        src/Bond.cpp
        src/Bond.h
        src/Options.cpp
        src/Options.h
        src/StructuredProduct.cpp
        src/StructuredProduct.h)
