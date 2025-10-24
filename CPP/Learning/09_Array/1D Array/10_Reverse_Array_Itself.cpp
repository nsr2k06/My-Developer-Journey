#include <iostream>
using namespace std;
int main(){
    //METHOD 1 USING SWAPPING

    int arr[] = {1,2,3,4,5,6,7,8,9};
    int n = sizeof(arr) / 4;

    cout<<" Original Array :- ";
    for (int j=0; j<n;j++){
        cout<<arr[j]<<" ";
    }

    int st=0;
    int end=n-1;

    //ARRAY REVERSED
    while(st<end){
        int temp=arr[st];
        arr[st]=arr[end];
        arr[end]=temp;
        st++;
        end--;
    }

    cout<<endl;
    

    cout<<" Reversed Array :- ";
    for (int j=0; j<n;j++){
        cout<<arr[j]<<" ";}
  
  
    return 0;
}