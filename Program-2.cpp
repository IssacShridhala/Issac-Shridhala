#include <iostream>
using namespace std;

int main() {
    int a;
    
    cout << "Enter how many numbers you want: ";
    cin >> a;

    // The first odd number starts from 1
    int odd = 1;

    cout << "Output: ";
    
    // Print the first 'a' odd numbers
    for (int i = 1; i <= a; i++) {
        cout << odd;
        
        // Add comma after each number except the last
        if (i != a) {
            cout << ", ";
        }

        odd = odd + 2;  // next odd number
    }

    cout << endl;
    return 0;
}
