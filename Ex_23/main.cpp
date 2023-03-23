#include <iostream>
#include <iomanip>

int main() {
    //display the multiplication table from 1 to 10
    int count = 1;

    for (int i = 1; i <= 10; ++i) {
        std::cout << std::setw(4) << count * i << std::endl;
        for (int j = 1; j <= 10; ++j) {
            std::cout << std::setw(4) << count * j;
        }
        count++;
    }

}