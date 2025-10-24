#include <iostream>
using namespace std;

void greet(){ //FUNCTION DECLARATION

    cout<<"Good Morning Sir !"<<endl; //FUNCTION MAIN CODE

    return; //Function Finished !
}

void callp1(){
    cout<<"Calling Person 1 "<<endl;
    return;
}

void callp2(){
    cout<<"Calling Person 2 "<<endl;
    return;
}

void callp3(){
    cout<<"Calling Person 3 "<<endl;
    return;
}

void groupcall(){
    callp1();
    callp2();
    callp3();
}

//SARE FUNCTIONS INT MAIN() KE UPAR LIKHO WARNA ERROR AYGA !

int main(){
    cout<<"Basic Function"<<endl;
    greet();  //FUNCTION CALL

    cout<<endl;

    
    cout<<"Fundamentals of Functions "<<endl;
    cout<<"Kisko Call Karna hai : \nPress 1 to Call Person 1 \nPress 2 to CallPerson 2 \nPress 3 to CallPerson 3 \nPress 4 to CallGroup Call "<<endl;
    
    int n;
    cout << "Enter Key : ";
    cin >> n;
    switch (n)
    {
    case 1:
        callp1();
        break;

    case 2:
        callp2();
        break;
    
    case 3:
        callp3();
        break;
    case 4:
        groupcall();
        break;

    default:
        cout<<"Invalid Call";
        break;
    }

    return 0; //ENDING OF A COMPLETE BLOCK 
              //SAME AS BREAK;
              //DEFAULT RETURN 0; (FIX)
}