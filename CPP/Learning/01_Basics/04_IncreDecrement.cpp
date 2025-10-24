#include <iostream>
using namespace std;
int main(){

    //++ INCREAMENT (PRE/POST)
    int x=20;
    cout<<x<<endl;

    x=x+1;
    cout<<x<<endl;
    
    x++;
    cout<<x<<endl;
    
    x+=1;
    cout<<x<<endl;

    // -- DECREAMENT (PRE/POST)
    int num=10;
    cout << num << endl;

    num=num-1;
    cout << num << endl;

    num--;
    cout << num << endl;

    num-=1;
    cout << num << endl;
    
    //PRE VS POST
    int n=10;
    cout<<n<<endl;
    
    n++;    //POST
    cout<<n<<endl;

    ++n;
    cout<<++n<<endl; //PRE 

    return 0;
}