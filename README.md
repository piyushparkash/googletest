googletest
==========

Testing with Google Test


Steps to RUN
============

1) Install Googletest
    
    sudo apt-get install libgtest-dev cmake
    cd /usr/src/gtest
    sudo cmake CMakeLists.txt
    sudo make
    sudo cp *.a /usr/lib
    
2) Run Cmake

    cmake CMakeLists.txt

3) Run Make

    make
    
4) Run the tests

    ./runTests
