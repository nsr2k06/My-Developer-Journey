#include <iostream>
using namespace std;
int main(){

    //Input Integer --> Output Float 
    int num1;
    cout <<"Enter Num1: ";
    cin >> num1;
    cout<<"Num1 is : "<< num1<<endl; //Original Value of Num1

    float copynum1=(float)num1; //Copying int into float type

    cout << "Half of Num1 is :"<<(copynum1)/2<<endl; //Final Output in Float DataType

    return 0;
}