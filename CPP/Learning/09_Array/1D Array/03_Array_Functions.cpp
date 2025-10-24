#include <iostream>
using namespace std;
void change(int arr[]){
    arr[0]=arr[0]*2;
    arr[1]=arr[1]*2;
    arr[2]=arr[2]*2;
    arr[3]=arr[3]*2;
}

    int main(){
    int arr[3]={1,2,5};

    cout<<"Original Array:- "; 
    for (int i=0; i<3;i++){
        cout<<arr[i]<<" ";
    }

    cout<<endl;
    cout<<"Updated Array:- "; 
    change(arr);
    for (int i=0; i<3;i++){
        cout<<arr[i]<<" ";
    }
  
  
    return 0;
}