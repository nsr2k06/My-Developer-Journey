#include <iostream>
using namespace std;
int main(){
    //WAP FOR MAKING PROFIIT LOSS USING COST PRICE SELLING PRICE AND ALL BASIC TERMS.
    float cp,sp;
    cout <<"Enter The Cost Price : ";
    cin>>cp;
    cout <<"Enterr The Selling Price : ";
    cin >>sp;
    
    if (sp>cp){
        cout<<"You are in Profit by : Rs. "<<sp-cp<<endl;
    }
    else if (cp>sp){
        cout<<"You are in Loss by : Rs. "<<cp-sp<<endl;
    }
    else {
        cout<<"There is No Profit and Loss" <<endl;
    }

    return 0;
}