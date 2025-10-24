#include <iostream>
using namespace std;
int main(){
    //WAP TO PRINT THE  PRODUCT OF THE DIGITS OF A INPUT NUMBER.
   int n;
   cout << "Enter The Number: ";
   cin >> n;

    cout<<"Product of "<< n <<" : ";

    int product=1;
    int ld;
    
    
    while(n!=0){
        int ld=n%10;
        n=n/10;
    
        product*=ld;
    }
    
    cout<<product;

 
return 0;
}
