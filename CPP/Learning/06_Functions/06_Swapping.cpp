#include <iostream>
using namespace std;

// METHOD 1: USING THE VARIABLE.
void swap(int a, int b) {
    int temp = a;
    a = b;
    b = temp;
    cout << "After Swapping (Using 3rd Variable)\n1st Number : " << a << "\n2nd Number : " << b << endl;
}

// METHOD 2: WITHOUT USING THE VARIABLES.
void swap2(int c, int d) {
    c = c + d;
    d = c - d;
    c = c - d;
    cout << "After Swapping (Without Using 3rd Variable)\n1st Number : " << c << "\n2nd Number : " << d << endl;
}

int main() {
    int n1, n2;
    cout << "Enter 1st and 2nd Numbers : ";
    cin >> n1 >> n2;

    swap(n1, n2);   // No need to store result, just call
    cout << endl;

    swap2(n1, n2);  // Again, just call directly
    return 0;
}
