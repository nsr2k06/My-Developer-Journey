#include <iostream>
using namespace std;

void print(int a) {
    if (a == 0)
        return;

    cout << a << " ";
    print(a - 1);
}

int main() {
    int n;
    cout << "Enter The Number: ";
    cin >> n;

    print(n);

    return 0;
}
