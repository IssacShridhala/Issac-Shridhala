#include <iostream>
using namespace std;

int main() {
    int a;
    cout << "Enter the value of a: ";
    cin >> a;

    cout << "Output: ";

    // Find the largest odd number <= a
    int limit = (a % 2 == 0) ? a - 1 : a;

    // Print odd numbers from 1 to 'limit'
    for (int i = 1; i <= limit; i += 2) {
        cout << i;

        if (i + 2 <= limit) {
            cout << ", ";
        }
    }

    cout << endl;
    return 0;
}
