#include <iostream>

void numberOfCall();

int main() {
    //Write a function without argument nor return value that just print out the number of time the function is called

    for (int i = 0; i < 10; ++i) {
        numberOfCall();
    }
}

void numberOfCall() {
    static int count;
    std::cout << "Call number: " << count << std::endl;
    count++;
}
