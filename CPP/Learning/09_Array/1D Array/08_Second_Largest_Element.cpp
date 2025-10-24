#include <iostream>
#include <climits>
using namespace std;

int main(){
    int arr[] = {1,2,3,4,5,6,7,8,9};
    int n = sizeof(arr) / sizeof(arr[0]);

    int mx = INT_MIN;
    for (int i = 0; i < n; i++) {
        mx = max(mx, arr[i]);
    }

    int smax = INT_MIN;
    for (int i = 0; i < n; i++) {
        if (arr[i] != mx) {
            smax = max(smax, arr[i]);
        }
    }

    cout << "Second Maximum: " << smax;

    return 0;
}
