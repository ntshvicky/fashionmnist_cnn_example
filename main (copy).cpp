#include <iostream>
#include <torch/torch.h>
#include "mnist/mnist_reader.hpp"


int main(int argc, char* argv[]) {

    std::cout << "MNIST fashion data directory: " << MNIST_FASHION_DATA_LOCATION << std::endl;
    mnist::MNIST_dataset<std::vector, std::vector<uint8_t>, uint8_t> dataset = mnist::read_dataset<std::vector, std::vector, uint8_t, uint8_t>(MNIST_FASHION_DATA_LOCATION);

    std::cout << "Nbr of training images = " << dataset.training_images.size() << std::endl;
    std::cout << "Nbr of training labels = " << dataset.training_labels.size() << std::endl;
    std::cout << "Nbr of test images = " << dataset.test_images.size() << std::endl;
    std::cout << "Nbr of test labels = " << dataset.test_labels.size() << std::endl;

    auto trainX = dataset.training_images;
    auto trainY = dataset.training_labels;
    auto testX = dataset.test_images;
    auto testY = dataset.test_labels;

    

}