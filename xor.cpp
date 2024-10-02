#include <iostream>
using namespace std;

int main() {
    int num1, num2;

    // Reading two numbers from the user
    cout << "Enter two numbers: ";
    cin >> num1 >> num2;

    // Displaying original values
    cout << "Before swapping: num1 = " << num1 << ", num2 = " << num2 << endl;

    // Swapping using XOR
    num1 = num1 ^ num2;
    num2 = num1 ^ num2;
    num1 = num1 ^ num2;

    // Displaying swapped values
    cout << "After swapping: num1 = " << num1 << ", num2 = " << num2 << endl;

    return 0;
}
