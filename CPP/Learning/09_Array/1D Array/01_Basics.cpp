#include <iostream>
using namespace std;
int main(){
    //MULTIPLE VALUE OF INTEGR KO EK HI VARIABLE ME KAISE STORE KARE

    //datatype array_name [Size] ={VALUES};
    
    cout<<"DRY RUN"<<endl;
    int num[]={1,2,3,4,5,6,7,8,9,10}; //DECLARATION & INITIALIZATION
    char grade[]={'A','B','C','D','E','F'};
    float cgpa[]={5.5,6.7,8.5,9.0,10,8,9,8.8};

    cout<<num[0]<<endl; //ACCESSING 
    num[10]=11; //SET
    cout<<num[10]<<endl; //ACCESSING 

    cout<<endl;

    //FOR LOOP SE PURA ARRAY INPUT KARWA LO !
    cout<<"Taking Input For the Array !"<<endl;
    int arr[5];
    for (int i=1; i<=5;i++){
        cout<<"Enter Element For Index "<< i << ": ";
        cin>>arr[i];
    }

    cout<<endl;

    cout<<"Printing the Array ! "<<endl;
    for (int j=0; j<5;j++){
        cout<<arr[j]<<" ";
    }
    return 0;
}