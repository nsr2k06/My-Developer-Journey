#include <iostream>
using namespace std;
int main(){
    int arr[] = {1,2,3,4,5,6,7,8,9};
    int n = sizeof(arr) / 4;

    int carr [n];
    for (int i=0;i<n;i++){
        int j=n-1-i;
        carr[i]=arr[j];
    }

     for (int i=0;i<n;i++){
        cout<<arr[i]<< " ";
        cout<< carr[i]<< " ";
    }



  
  
    return 0;
}