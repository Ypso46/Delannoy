#include <iostream>

char c;

float operation(float x, float y);

int main() {
    /*
    Modify the code from the previous exercise. The function should now take only 2 number, and the operation
    character should be a global variable
    */

    int x, y;
    std::cout << "Enter two numbers: " << std::endl;
    std::cin >> x >> y;

    c = '+';
    operation(x, y);
}

float operation(float x, float y){
    float result;
    switch (c) {
        case '+':
            result =  x + y;
            std::cout << "The result of the addition is: " << result << std::endl;
            break;
        case '-':
            result = x - y;
            std::cout << "The result of the substraction is: " << result << std::endl;
            break;
        case '*':
            result = x * y;
            std::cout << "The result of the multiplication is: " << result << std::endl;
            break;
        case '/':
            result = x / y;
            std::cout << "The result of the disision is: " << result << std::endl;
            break;
        default:
            result = x + y;
            std::cout << "The result of the addition is: " << result << std::endl;
            break;
    }
    return result;
}
