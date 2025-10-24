#include <iostream>
using namespace std;
int main(){
    
    //WAP TO COUNT THE NO OF DIGIT OF A INPUT NUMBER.
    int n;
    cout<<"Enter The Number : ";
    cin >> n;

    int count =0;
    while(n!=0){
        n=n/10;
        count++;
    }
    cout<<count;
 

return 0;
}