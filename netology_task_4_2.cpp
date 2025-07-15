#include <iostream>

int main()
{
    int input{};
    int summ{};

    std::cout << "Enter number: " << std::endl;
    std::cin >> input;

    while (input > 0) {
        summ += input % 10;
        input = input / 10;
    }
    std::cout << "Summ of digits = " << summ << std::endl;
}

