#include <iostream>
using namespace std;
int main(){
    //WAP TO REVERSE THE ENTERED NUMBER.
    int n;
    cout<<"Enter The Number :";
    cin >> n;
 
    int rev=0;
    while(n!=0){
        int ld = n%10;
        rev*=10;
        rev+=ld;
        n/=10;
    }
 
    cout <<rev;
return 0;
}
