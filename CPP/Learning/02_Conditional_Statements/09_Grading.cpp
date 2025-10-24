#include<iostream>
using namespace std;
int main(){

    float prct;
    cout <<"Enter Your Final Percentage (0-100) : ";
    cin >> prct;

    if (prct>81 && prct<=100) cout <<"Very Good"<<endl;
    else if(prct>61 && prct<80) cout <<"Good"<<endl;
    else if(prct>41 && prct<60) cout <<"Average"<<endl;
    else if (prct<0 || prct>100)  cout <<"Please Enter Your Final Percentage Bewteen (0-100) : ";
    else cout <<"FAIL"<<endl;
    return 0;
}