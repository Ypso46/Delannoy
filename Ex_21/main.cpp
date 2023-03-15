#include <iostream>

int main() {
    //Write a program that find the n value of the Fibonacci serie. n is a user input.
    int userInput = 0;
    std::cout << "Enter a number: " << std::endl;
    std::cin >> userInput;

    //three first values of the serie
    int n_2 = 0;
    int n_1 = 1;
    int n = 0;

    for (int i = 1; i < userInput; ++i) {
        n = n_2 + n_1;
        n_2 = n_1;
        n_1 = n;
    }

    std::cout << "The value at the position " << userInput << " is = " << n << std::endl;

}