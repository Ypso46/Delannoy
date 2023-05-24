#include <iostream>

float operation(float x, float y, char c);

int main() {
    int x, y;
    std::cout << "Enter two numbers: " << std::endl;
    std::cin >> x >> y;

    std::cout << "The result of the addition is: " << operation(x, y, '+') << std::endl;
    std::cout << "The result of the substraction is: " << operation(x, y, '-') << std::endl;
    std::cout << "The result of the multiplication is: " << operation(x, y, '*') << std::endl;
    std::cout << "The result of the disision is: " << operation(x, y, '/') << std::endl;

}

float operation(float x, float y, char c){
    float result;
    switch (c) {
        case '+':
            result =  x + y;
            break;
        case '-':
            result = x - y;
            break;
        case '*':
            result = x * y;
            break;
        case '/':
            result = x / y;
            break;
        default:
            result = x + y;
            break;
    }
    return result;
}
