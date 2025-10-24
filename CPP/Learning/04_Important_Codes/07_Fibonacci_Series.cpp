#include <iostream>
using namespace std;

int fibo(int num){
    if (num==0 || num==1) return 1;
    return fibo(num-1)+fibo(num-2);
}

int main(){
    int n;
    cout << "Enter The No. of Terms : ";
    cin >> n;

    cout<<"Fibonacci Series Upto "<<n<< " : "<< fibo(n);
  
  
    return 0;
}