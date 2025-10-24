#include <iostream>
using namespace std;
int main(){

    ///WAP FOR PRINTING SIMPLE INTEREST

    float principle=3000; //MONEY
    float rate=2.5; //EMI
    float time=3; //Years

    float si=(principle*rate*time)/100;
    cout<<si<<endl;

    return 0;
}