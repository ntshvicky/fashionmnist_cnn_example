# fashionmnist_cnn_example
An example of training convolutional neural networks with Fashion MNIST dataset in C++ and Cmake

# setup
1. You have to download Fashion Mnist dataset from https://www.kaggle.com/zalando-research/fashionmnist in data folder....

2. download libtorch library using below command in linux/Ubuntu

wget https://download.pytorch.org/libtorch/nightly/cpu/libtorch-shared-with-deps-latest.zip
unzip libtorch-shared-with-deps-latest.zip

or for window also you can download from here based on your window type  
https://pytorch.org/get-started/locally/

3. to build from cmake you have to create a folder build...go inside build folder and 
execute this command 
make -DCMAKE_PREFIX_PATH=/path/to/libtorch ..

after everything successfull execution execute this comamnd
cmake --build . --config Release

to build again ..now you just need to execute "make" and then "./main" to execute the file......

take help from https://pytorch.org/tutorials/advanced/cpp_frontend.html


# Why C++
Python is easier than c++ , but for embedded application... and for faster performance C++ is better option. Because multithread in C++ is better than Python.

I have no good idea in CNN parameter ..mean what i have to put on input channel, or output channel,, 
how much layer i need for good accuracy.... You can learn it from https://towardsdatascience.com/covolutional-neural-network-cb0883dd6529
and try on you program.. for better optimization ..you can use squential instead of linear...... and add more conv2 with padding and pooling layer
and better to use flatten layer just before fully connected layer......(may be my theory is not good,, i am just learning)
