#include <iostream>

int main() {
    //Enter as much value as you want between 0 and 20. Write a program that determine which one is the max and the min and how many times they where define.

    std::cout << "Enter numbers between 0 and 20: (when you're done, enter -1)" << std::endl;

    int userInput = 0;
    int max = 0;
    int min = 20;
    int nbMax = 0;
    int nbMin = 0;
    bool control = true;
    int nbIter = 0;

    while (control) {
        std::cin >> userInput;
        if (userInput == - 1) {
            control = false;
            continue;
        }
        if (nbIter == 0) {
            min = max = userInput;
            nbIter++;
        }
        if (userInput >= max) {
            int tempMax = max;
            max = userInput;
            if (tempMax == max) {
                nbMax += 1;
            } else {
                nbMax = 1;
            }
        } else if (userInput <= min) {
            int tempMin = min;
            min = userInput;
            if (tempMin == min) {
                nbMin += 1;
            } else {
                nbMin = 1;
            }
        }
        userInput = 0;

    }

    std::cout << "The min value is: " << min << " and it appears " << nbMin << " times" << std::endl;
    std::cout << "The max value is: " << max << " and it appears " << nbMax << " times" << std::endl;
}