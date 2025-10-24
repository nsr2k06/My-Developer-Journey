#include <iostream>
using namespace std;
int main(){
    //WAP TO MAKE A BASIC CALCULATOR USING SWITCH CASE STATEMENTS.

    float num1,num2;
    char ch;

    cout << "Enter Num1 & Num2 : ";
    cin >> num1>>num2;

    cout << "Enter Operation From ( + - * / % )";
    cin >> ch;

    switch (ch){
        case '+':
            cout<<num1 <<"+ "<<num2 << " = "<<num1+num2<<endl; 
            break;
        case '-':
            cout<<num1 <<" - "<<num2 <<" = "<<num1-num2<<endl; 
            break;
        case '*':
            cout<<num1<<" * "<<num2 <<" = "<<num1*num2<<endl; 
            break;
        case '/':
            cout<<num1 <<" / "<<num2 <<" = "<<num1/num2<<endl; 
            break;
        case '%':
            cout<<num1 <<" % "<<num2 <<" = "<<(int)num1%(int)num2<<endl; 
            break;
        default:
            cout<<"Please Enter From ( + - * / % )";
    }

	return 0;
}