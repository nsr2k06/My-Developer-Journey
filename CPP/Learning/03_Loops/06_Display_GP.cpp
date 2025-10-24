#include <iostream>
using namespace std;
int main(){
    //DISPLAY GP 1 2 4 8 16 32 64 .... upto n numbers.

    int num;
    cout<<"Enter The Number ";
    cin >> num;

    int a=1; //Starting Value 
    for (int i=1;i<=num;i++){
        cout<<a<< " ";
        a=a*2; 
    }
	return 0;
}