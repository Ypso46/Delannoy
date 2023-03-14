#include <iostream>

int main() {
    //calculate the "harmonic serie" (i.e.: 1 + 1/2 + 1/3... + 1/n) and print the result. n is an input from user

    int userInput = 0;
    std::cout << "Enter a number: " << std::endl;
    std::cin >> userInput;

    double sum = 0.;

    for (int i = 1; i <= userInput; i++) {
        sum += 1.0/i;
    }
    std::cout << "The sum is: " << sum << std::endl;
}