#include <iostream>
using namespace std;
int main(){
    //PRINTING ALL THE EVEN NUMBERS FROM 1 TO N.

    int num;
    cout<<"Enter The Number : ";
    cin >> num;

    for (int i=1;i<=num;i++){
        if (i%2==0){
            cout<<i<<endl;
        }
    }

	return 0;
}