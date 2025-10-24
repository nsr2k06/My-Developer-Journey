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
    for (int j=1; j<=size;j++){
        cout<<arr[j]<<" ";
    }

    cout <<endl;

    //MAX VALUE IN THE ARRAY
    int mx=arr[0];

    for (int j=1;j<=size;j++){
        if (arr[j]>mx) mx=arr[j];
    }
    cout<<"Maximum Value in the Array : "<<mx;
  
  
    return 0;
}