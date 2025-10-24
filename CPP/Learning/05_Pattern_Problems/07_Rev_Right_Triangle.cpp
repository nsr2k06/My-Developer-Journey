#include <iostream>
using namespace std;
int main(){

    //STARS 
    cout<<"Program 1 : Printing The Star Pattern as Flipped Right Triangle !"<<endl;
    int n;
    cout << "Kitne Star Rows ki Range Ka Right Triangle Chaiye : ";
    cin >> n;

    for(int i=1; i<=n;i++){
        for(int j=1; j<=n-i+1;j++){ //N-I+1 FOR REV / FLIPPED
            cout<<" * ";
        }
        cout<<endl;
    }
  
    //COUNTING NUMBERS
    cout<<"Program 2 : Printing The Number Pattern as Flipped Right Triangle !"<<endl;
    int m;
    cout << "Kitne Rows ki Number Range Ka Right Triangle Chaiye : ";
    cin >> m;

    for(int i=1; i<=m;i++){
        for(int j=1; j<=m-i+1;j++){ //N-I+1 FOR REV / FLIPPED
            cout<<j<<" ";
        }
        cout<<endl;
    }

    //ALPHABETS 

    cout<<"Program 3 : Printing The Alphabetic Pattern as Flipped Right Triangle !"<<endl;
    char ch;
    cout << "Kitni Alphabetic Range ka Flipped Right Triangle Chaiye : ";
    cin >> ch;

    for (int i=(char)64; i<=ch; i++){
        for(int j=(char)64; j<=ch-i+1;j++){
            cout<<(char)j<<" ";
        }
        cout<<endl;
    }
    return 0;
}