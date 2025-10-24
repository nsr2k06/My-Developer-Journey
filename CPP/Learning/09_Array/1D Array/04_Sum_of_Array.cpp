#include <iostream>
using namespace std;

int main() {
    int size;
    cout << "Enter The Size of the Array: ";
    cin >> size;

    int arr[size];  // Variable-length arrays are supported by some compilers, but not standard C++. Use with caution.

    // Taking input
    for (int i = 0; i < size; i++) {
        cout << "Enter The Element " << i + 1 << " : ";
        cin >> arr[i];
    }

    // Printing the array
    cout << "Printing the Original Array :- ";
    for (int j = 0; j < size; j++) {
        cout << arr[j] << " ";
    }
    cout << endl;

    // Summation of array
    int sum = 0;
    for (int k = 0; k < size; k++) {
        sum += arr[k];
    }

    cout << "Printing the Sum of the Array :- " << sum << endl;

    return 0;
}
