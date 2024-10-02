#include <iostream>
int main() {
    float num1, num2, num3;
    std::cout << "Enter three numbers: ";
    std::cin >> num1 >> num2 >> num3;
    float largest = (num1 >= num2 && num1 >= num3) ? num1 :
                    (num2 >= num1 && num2 >= num3) ? num2 :
                    num3; 
    std::cout << "The largest number is: " << largest << std::endl;
    return 0;
}
