#include <iostream>

int main() {
    //display a triangle of stars '*'. The height should be a user input. The last line should be aligned on the left of the screen

    int userInput = 0;
    std::cout << "How many lines do you want: " << std::endl;
    std::cin >> userInput;

    for (int i = 1, k = 0; i <= userInput; ++i, k = 0) {
        for (int spaces = 1; spaces <= userInput - i; ++spaces) {
            std::cout << "  ";
        }

        while (k != 2 * i - 1) {
            std::cout << "* ";
            ++k;
        }
        std::cout << std::endl;
    }
}