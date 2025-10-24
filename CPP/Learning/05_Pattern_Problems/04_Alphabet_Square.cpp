#include <iostream>
using namespace std;
int main(){

    char ch;
    cout << "Kitni Alphabetic Range ka Square Pattern Chaiye : ";
    cin >> ch;

    for (int i=(char)65; i<=ch; i++){
        for(int j=(char)64; j<=ch;j++){
            cout<<(char)j<<" ";
        }
        cout<<endl;
    }
  
    return 0;
}