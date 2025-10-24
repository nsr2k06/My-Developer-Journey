#include <iostream>
using namespace std;
int main(){

    //VOWELS IN THE STRING !

    int tv=0; //TOTAL VOWELS 
    string s;
    cout<<"Enter The String : ";
    getline(cin,s);
    cout<<"Your String is :"<<s<<endl;
    
    for(int i=0; i<s.length();i++){
        if(s[i]=='a' || s[i]=='A' || s[i]=='E' || s[i]=='e' ||s[i]=='i' || s[i]=='I' ||s[i]=='o' || s[i]=='O' ||s[i]=='U' || s[i]=='u'){
            tv+=1;
        }
    }
    cout<<"Total Number of Vowels : "<<tv;
  
    return 0;
}