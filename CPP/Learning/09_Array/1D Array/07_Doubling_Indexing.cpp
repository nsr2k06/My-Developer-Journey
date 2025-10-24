#include <iostream>
using namespace std;

//INDEXING ODD +20
// INDEXING EVEN +10
//INDEXING 1 +100

int main(){
    int arr[7]={1,2,5,19,32,4,6};
    int n=sizeof(arr)/4;

    cout<<"Original Array:- "; 
    for (int i=0; i<7;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;

    for (int i=0; i<n;i++){
        if(i==0) {//1 +100
            arr[i]+=100;
        }
        if (i%2==0){//EVEN +10
            arr[i]+=10;
        }else{//ODD +20
            arr[i]+=20;
        }
        cout<<arr[i]<<" ";
    }


  
    return 0;
}