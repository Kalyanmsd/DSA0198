#include <iostream>
int main() {
    float num1, num2;
    std::cout << "Enter two numbers: ";
    std::cin >> num1 >> num2;
    std::string result = (num1 == num2) ? "The numbers are equal." : "The numbers are not equal.";
    std::cout << result << std::endl;
    return 0;
}
