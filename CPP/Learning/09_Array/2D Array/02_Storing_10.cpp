#include <iostream>
using namespace std;
int main(){
    //STORE 10 AT EVERY INDEX  OF 5,5 !

    int arr[5][5];
    //INPUT
    for(int i=0;i<5;i++){
        for(int j=0;j<5;j++){
            arr[i][j]=10;
        }
    }
    
    //OUTPUT
        for(int i=0;i<5;i++){
        for(int j=0;j<5;j++){
            cout << arr[i][j]<<" ";
        }
        cout<<endl;

    }
  
    return 0;
}   