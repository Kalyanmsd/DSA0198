#include <iostream>
using namespace std;
int main() {
    float num1, num2;
    cout << "Enter two floating-point numbers: ";
    cin >> num1 >> num2;
    cout << "Addition: " << num1 + num2 << endl;
    cout << "Subtraction: " << num1 - num2 << endl;
    cout << "Multiplication: " << num1 * num2 << endl;
    if (num2 != 0) {
        cout << "Division: " << num1 / num2 << endl;
    } else {
        cout << "Division cannot be performed with 0 as the divisor." << endl;
    }
    cout << "Modulo operation is not valid for floating-point numbers." << endl;
    return 0;
}
