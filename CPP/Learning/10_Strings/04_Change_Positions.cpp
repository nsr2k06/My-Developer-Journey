#include <iostream>
using namespace std;
int main(){
    //CHANGING ALL THE EVEN AND ODD POSITION IN THE STRINGS !
    //EVEN == A

    string s;
    cout<<"Enter The String : ";
    getline(cin,s);
    cout<<"Your String is :"<<s<<endl;
  
        for(int i=0; i<s.length();i++){
        if(i%2==0) s[i]='a';
    }

    cout<<"After Changes Your String is :"<<s<<endl;
    return 0;
}