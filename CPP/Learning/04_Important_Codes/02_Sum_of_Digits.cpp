#include <iostream>
using namespace std;
int main(){
    //WAP TO PRINT THE SUM OF A INPUT NUMBER

    int n;
    cout<<"Enter The Number :";
    cin >> n;

    cout<<"Sum of "<< n <<" : ";

    int sum=0;
    int ld;
    

    while(n!=0){
        int ld=n%10;
        n=n/10;
    
        sum+=ld;
    }
    
    cout<<sum;

 
return 0;
}
