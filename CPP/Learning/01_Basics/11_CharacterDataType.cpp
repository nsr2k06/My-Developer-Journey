#include <iostream>
using namespace std;
int main(){
    //Character char DataType me Single Value Store Hogi Bas!

    char name ='N'; // CORRECT
    cout<<name<<endl;
    //char name='Nitin'; WRONG

    //ASCII VALUE OF a is :97 or Z ki 122.
    //ASCII VALUE OF A is :65 or z ki 90.
    //ASCII VALUE OF 0 is : 48 or 9 ki 57.

    char character;
    cout <<"Enter Your Character : ";
    cin >> character;

    cout <<"Printing the ASCII Values : ";
    cout << (int)character;
    
    return 0;
}