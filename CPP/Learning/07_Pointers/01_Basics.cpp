#include <iostream>
using namespace std;
int main(){
    //POINTER ME ADDRESS OR STORING THE VALUE KA KHEL HAI SIRF 
    //  & ADDRESS
    // * VALUE STORING

    int marks=99;
    cout<<"Printing the Value of X : "<<marks<<endl;
    cout<<"Printing The Addresss of x : "<< &marks <<endl;
  
    cout<<endl;

    int * tmarks= &marks;
    cout<<"Printing the Value of X (jisme address of x store ho gya hai) : "<<tmarks<<endl;
    cout<<"Printing The Addresss of tmarks: "<< &tmarks <<endl;

    cout<<endl;
    
    int y=100;
    cout<<"Printing the Address of Y Variable : "<< &y<<endl;

    cout<<endl;
    
    int *ptr = &y;
    cout<<"Printing The Address of ptr having the address of Y Variable "<<ptr<<endl;
    cout<<"Printing the Value Stored in ptr "<<*ptr<<endl;
    return 0;
}