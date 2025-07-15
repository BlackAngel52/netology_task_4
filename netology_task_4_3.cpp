#include <iostream>

int main()
{
    int input{};
    int count{1};

    std::cout << "Enter an integer: " << std::endl;
    std::cin >> input;

    for (count; count <= 10; ++count) {
        std::cout << input << " x " << count << " = " << input * count << std::endl;
    }
    return 0;
}


