#include <iostream>

int isOddOrEven(int x);
int isAMultiple(int x);

int main() {
    /*
    Ask for a number. Write two function. The first one should say if the number is odd.
    The second one should say if the number is a multiple of 3 and/or 6
    */
    isOddOrEven(9);
    isAMultiple(9);
}

int isOddOrEven(int x) {
    if (x % 2 == 0) {
        std::cout << "The number is even!\n";
        return 0;
    }
    return 1;
}

int isAMultiple(int x) {
    if ((x % 3 == 0) && (x % 6 == 0)) {
        std::cout << "The number is a multiple of 3 and 6\n";
        return 0;
    } else if ((x % 3 == 0)) {
        std::cout << "The number is a multiple of 3\n";
        return 0;
    } else if ((x % 6 == 0)) {
        std::cout << "The number is a multiple of 6\n";
        return 0;
    } else {
        std::cout << "The number is a prime number\n";
        return 0;
    }
    return 1;
}
