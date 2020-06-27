cmake_minimum_required(VERSION 3.0 FATAL_ERROR)
project(main)

find_package(Torch REQUIRED)

find_package(MNIST PATHS ./)


include_directories(${MNIST_INCLUDE_DIR})
add_executable(main main.cpp)
target_link_libraries(main "${TORCH_LIBRARIES}")
set_property(TARGET main PROPERTY CXX_STANDARD 14)
target_compile_features(main PRIVATE cxx_range_for)


target_compile_definitions(main PRIVATE MNIST_DATA_LOCATION="${MNIST_DATA_DIR}")
target_compile_definitions(main PRIVATE MNIST_FASHION_DATA_LOCATION="${MNIST_FASHION_DATA_DIR}")