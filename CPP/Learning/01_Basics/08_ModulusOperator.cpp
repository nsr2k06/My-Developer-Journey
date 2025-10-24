#include <iostream>
using namespace std;
int main(){
   
    //THIS IS MODULUS OPERATOR (%) - IT GIVES REMAINDER.
    int num1=100;
    int num2=30;
    cout<<num1%num2<<endl; //agge wala (divident jo divide hoga)
    cout<<num2%num1<<endl; //piche wala divider

    //Rules
    // num1%num2 num2 chota hoga num1 bada tabhi toh remaindeer bachyga
    //a%a= 0
    //a%b =a if (a<b)
    //a%(-b)=a%b
    //(-a)%b=-[a%b]

    return 0;
}