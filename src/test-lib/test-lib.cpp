#include "test-lib.hpp"

const std::string message_from_src(){
    return "Hi there from test-lib.cpp\n";
}

int multiply(const int a, const int b){
    const int result = a * b;
    return result;
}

int add(const int a, const int b){
    const int result = a + b;
    return result;
}