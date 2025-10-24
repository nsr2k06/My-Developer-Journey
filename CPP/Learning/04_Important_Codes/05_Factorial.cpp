#include <iostream>
using namespace std;
int main(){
    //WAP TO PRINT THE FACTORIAL OF A NUMBER.

    int n;
    cout << "Enter The Number: ";
    cin >> n;

    int fact=1;

    for(int i=1; i<=n;i++){
        fact=i*fact;
    }
    cout<<"Factorial of "<<n<<" : "<< fact;
  
  
  
  return 0;
}
