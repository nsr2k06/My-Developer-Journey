#include <iostream>
using namespace std;

int fact(int a){
    int fact=1;

    for(int i=1; i<=a;i++){
        fact=i*fact;
    }
    return fact;
}

int nCr(int n,int r){
    int a=fact(n);
    int b=fact(r);
    int c=fact(n-r);
    return a/(b*c);

}

int main(){

    int num;
    cout << "Enter The Number: ";
    cin >> num;
    for(int i=0;i<=num;i++){
        for(int j=0;j<=i;j++){
            cout<<nCr(i,j)<<" ";
        }
        cout<<endl;
    }
    return 0;
}
