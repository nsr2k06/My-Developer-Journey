#include<iostream>
using namespace std;
int main(){
    int n,m,o;
    cout <<"Enter The Number 1 2 3 :";
    cin >> n >> m >> o;


    //METHOD 1
    if (n%5==0 && n%3==0){
        cout<<n<< " : Divisble By 3 and 5"<<endl;
    }else {
        cout<<n<< " : Not Divisble By 3 and 5"<<endl;
    }

    //METHOD 2 //LOGICAL AND
    if (m%15==0) cout<<m<< " : Divisble By 3 and 5"<<endl;
    else cout<<m<< " : Not Divisble By 3 and 5"<<endl;
    return 0;

    //METHOD 3
    if (o%3==0 or o%5==0){ //LOGICAL OR
        cout<<o<< " : Divisble By 3 or 5"<<endl;
    }
    else {
        cout<<o<< " : Not Divisble By 3 or 5"<<endl;
    }
    return 0;

}
