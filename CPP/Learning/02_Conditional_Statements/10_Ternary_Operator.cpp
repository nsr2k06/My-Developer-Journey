#include <iostream>
using namespace std;
int main(){
    //USING TERNARY OPERATOR
    
    //ODD EVEN PROGRAM 
    int n;
    cout<<"Enter The Number To Check : ";
    cin>>n;

    // if (n%2==0) cout<<n<<" : Even"<<endl; //2 SE DIVIDE HOGA OR REMAINDER 0
    // else cout<<n<<" : Odd";

    // (Condition) ?   if true    :   if false;
        (n%2==0)  ? cout<<"Even" : cout<<"Odd";
    
	return 0;
}