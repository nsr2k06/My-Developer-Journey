#include<iostream>
using namespace std;
int main(){
    int s1,s2,s3;
    cout <<"Enter The Side 1 2 3 :";
    cin >> s1 >> s2 >> s3;

    if (s1+s2>s3 && s2+s3>s1 && s3+s1>s2)
        cout<<"This is Valid & Perfect Triangle"<<endl;
    else 
        cout<<"This is Not Valid & Perfect Triangle"<<endl;

    return 0;
}