#include<iostream>
using namespace std;
int main(){

    //Method 1
    int n;
    cout<<"Enter The Number To Check : ";
    cin>>n;
    if (n%2==0) cout<<n<<" : Even"<<endl; //2 SE DIVIDE HOGA OR REMAINDER 0
    else cout<<n<<" : Odd";

    //Method 2
    int m;
    cout<<"Enter The Number To Check : ";
    cin>>m;
    if (m%2==0){
        cout<<m<<": Even"<<endl;
    
    }else{
     cout<<m<<" : Odd"<<endl;
    }

    //Method 3
    int o;
    cout<<"Enter The Number To Check : ";
    cin>>o;
    if (o%2!=0){
        cout << o <<" : Odd"<<endl;
    }
    else {
        cout << o <<" : Even" <<endl;
    }
    
    return 0;
}