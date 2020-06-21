// a small C++ program
#include <iostream> // #include <directives>

int main() {
    std::cout << "Hello," << std::endl; // returns std:cout as its value, side effect is outputing Hello, world!
    std::cout << "world!" << std::endl;
    return 0;
}

// operator: << | operands: std::cout, "Hello, world", std::endl
// (std:cout << "Hello, world") << std::endl     left associative
// std:cout has type std:ostream
