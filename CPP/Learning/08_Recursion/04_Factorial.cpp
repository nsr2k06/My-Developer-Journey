#include <iostream>
using namespace std;

int fact(int num){
    if (num==0 || num==1)  return 1;
    return num * fact(num-1);
}

int main(){
    int n;
    cout << "Enter The Number: ";
    cin >> n;

    cout<<"Factorial of "<<n<< " : "<< fact(n);
  
  
    return 0;
}