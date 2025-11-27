#include <iostream>
#include <vector>
#include <map>
using namespace std;

int main() {
    // List of numbers we will check
    vector<int> numbers = {1, 2, 8, 9, 12, 46, 76, 82, 15, 20, 30};

    // This map will store: divisor → count of multiples
    map<int, int> result;

    // Check for divisors from 1 to 9
    for (int d = 1; d <= 9; d++) {
        int count = 0;

        // Check each number in the list
        for (int num : numbers) {
            if (num % d == 0) {   // If divisible, it is a multiple
                count++;
            }
        }

        result[d] = count;   // Store the count in the map
    }

    // Display the result
    cout << "{";
    for (auto it = result.begin(); it != result.end(); it++) {
        cout << it->first << ": " << it->second;
        if (next(it) != result.end())
            cout << ", ";
    }
    cout << "}";

    return 0;
}
