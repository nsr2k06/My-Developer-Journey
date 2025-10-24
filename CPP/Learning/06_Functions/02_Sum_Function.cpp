#include <iostream>
using namespace std;

int sum(int a,int b){ //PASSING PARAMETERS
    return a+b;       // RETURN SUM 
}

int main(){
    int n;
    cout << "Enter The 1st Number: ";
    cin >> n;
    
    int n2;
    cout << "Enter The 2nd Number: ";
    cin >> n2;

    int result =sum(n,n2); //FUNCTION CALL INTO STORING VARIABLE
                           //N AND N2 MERE ACTUAL PARAMTERS HAI (PASS BY VAUE)
    cout<<result;          //PRINTING THE OUTPUT OBTAINED FROM FUNCTION SUM 

    return 0;
}