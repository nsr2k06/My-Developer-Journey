#include<iostream>
using namespace std;
int main(){
    int n1,n2,n3;
    cout <<"Enter The Number 1 NUmber 2 Number 3:";
    cin >> n1 >> n2 >> n3;

    if (n1>n2 && n1>n3) cout<<n1<<" : Greatest"<<endl;
    else if (n2>n1 && n2>n3) cout <<n2<<" : Greatest"<<endl;
    else cout <<n3<<" : Greatest"<<endl;
    
    return 0;
}