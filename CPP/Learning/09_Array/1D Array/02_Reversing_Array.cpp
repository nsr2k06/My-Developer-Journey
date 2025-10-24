#include <iostream>
using namespace std;
int main(){

    //KITNE SIZE KI ARRAY CHAIYE !
    int size;
    cout<<"Enter The Size of the Array : ";
    cin>>size;

    //ARRAY DECLARE KRDIYA !
    int arr[size];

    //ARRAY KE ELEMENTS ENTER KRWA LIYE BY THE USER !
    for (int i=1; i<=size; i++){
        cout<<"Enter The Element "<<i<< " : ";
        cin>>arr[i];
    }

    //PRINTING THE ARRAY !
    cout<<"Printing the Original Array :- ";
    for (int j=0; j<size;j++){
        cout<<arr[j]<<" ";
    }

    cout <<endl;
    
    //REVERSE ARRAY PRINTING !
    cout<<"Printing the Reversed Array :- ";
    for (int k=size; k>=1;k--){
        cout<<arr[k]<<" ";
    }

  
    return 0;
}