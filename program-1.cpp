#include <iostream>
#include <string>
using namespace std;

class Calculator {
private:
    double a, b;
    string operation;

public:
    // Constructor to take inputs
    Calculator(double num1, double num2, string op) {
        a = num1;
        b = num2;
        operation = op;
    }

    // Function to perform the operation
    void compute() {
        if (operation == "add") {
            cout << "Result: " << (a + b) << endl;
        }
        else if (operation == "subtract") {
            cout << "Result: " << (a - b) << endl;
        }
        else if (operation == "multiply") {
            cout << "Result: " << (a * b) << endl;
        }
        else if (operation == "divide") {
            if (b == 0) {
                cout << "Error: Cannot divide by zero." << endl;
            } else {
                cout << "Result: " << (a / b) << endl;
            }
        }
        else {
            cout << "Invalid operation type!" << endl;
        }
    }
};

int main() {
    double num1, num2;
    string op;

    cout << "Enter number a: ";
    cin >> num1;

    cout << "Enter number b: ";
    cin >> num2;

    cout << "Enter operation (add / subtract / multiply / divide): ";
    cin >> op;

    // Create object of Calculator class
    Calculator calc(num1, num2, op);

    // Perform the calculation
    calc.compute();

    return 0;
}
