#include <iostream>
using namespace std;
int main(){

    //  PRINTING NUMBERS FROM 1 TO 100 OR N.

    int num;
    cout<<"Enter The Number Till Where You Want to Print Numbers : ";
    cin >> num;

    for (int i =1; i<=num;i++){
        cout<<i<<endl;
    }	
    return 0;
}