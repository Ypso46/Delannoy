#include <iostream>

void add(int x, int& y);

int main() {
    /*
    Write a function that add a value taht is given as an argument to a value also given as an argument:
    i.e. add(2*p+1, n) --> should add 2*p+1 to the variable n
    */
    int first = 12;
    int second = 5;


    std::cout << "First before: " << first << "\n";
    std::cout << "Second before: " << second << "\n";

    add((2 * first + 1), second);
    std::cout << "First after: " << first << "\n";
    std::cout << "Second after: " << second << "\n";
}

void add(int x, int& y) {
    y += x;
}