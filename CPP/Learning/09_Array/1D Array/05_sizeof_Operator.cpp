#include <iostream>
using namespace std;
int main(){
    int arr[]={1,2,3,4,5,6,8,9,0};
    cout<<"The Size of the Array : "<<sizeof(arr);
    // ANS 36 BCZ 9x4(byte)==36
    
    cout<<endl;

    cout<<"The Size of the Array : "<<sizeof(arr)/4;
    //Original Size ye hai divide by no. of byte se...
    
    return 0;
}