#include <iostream>
#include <cmath>

int main() {
    //Write a program that calculate the sqaure roots of user input. The program has to stop when user input = 0. User input must not be negative values
    double userInput = 0;
    
    do {
    std::cout << "Enter a positive number: " << std::endl;
    std::cin >> userInput;
    if (userInput < 0) {
        std::cout << "Error!" << std::endl;  
        continue;     
    } else if (userInput == 0) {
        break;
    }

    std::cout << "The square root is: " <<sqrt(userInput) << std::endl;
    } while (userInput != 0);
}