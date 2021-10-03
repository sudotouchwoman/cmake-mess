#include "test-lib.hpp"

int main(int n_args, const char* args[]) {
    std::cout << n_args << " Arguments provided\n";
    auto number = [&](){
        if (n_args == 3) return multiply(atoi(args[1]), atoi(args[2]));
        return 0;
    }(); 
    std::cout << message_from_src();
    std::cout << "Result is: " << number << std::endl;
}
