#include <iostream>
using namespace std;
int main(){

                         //USING WHILE LOOP
    int i=0;             //INTIALIZATION
    while(i!=10){        //CONDITION
        cout<<i<<endl;   // CODE
        i++;             //INCREAMENT DECREAMENT
    }
    
    //QUESTION 1
    cout<<"Question 1"<<endl;
    int x=1;
    while(x==1){
        x=x-1;
        cout<<x<<endl;
    }

    //QUESTION 2 - INFINITE LOOP 
    cout<<"Question 2"<<endl;
    int i1=1;
    while(i1<=10){
        cout<<i1<<endl;
        i1++;
    }

    

    return 0;
}