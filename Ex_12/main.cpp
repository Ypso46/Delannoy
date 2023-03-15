#include <iostream>

int main() {
    // //write this program with while and do while loop
    // int i, n, sum;
    // sum = 0;
    // for (i = 0; i < 4; i++) {
    //     std::cout << "Enter a number: " << std::endl;
    //     std::cin >> n;
    //     sum += n;
    // }
    // std::cout << "Sum: " << sum << std::endl;

    // //with while loop
    int i, n, sum;
    sum = 0;
    i = 0;
    while (i < 4) {
        std::cout << "Enter a number: " << std::endl;
        std::cin >> n;
        sum += n;
        i++;
    }
    std::cout << "Sum: " << sum << std::endl;

    //with do while loop
//    int i, n, sum;
//    sum = 0;
//    i = 0;
//    do {
//        std::cout << "Enter a number: " << std::endl;
//        std::cin >> n;
//        sum += n;
//        i++;
//    } while (i < 4);
//    std::cout << "Sum: " << sum << std::endl;
//}