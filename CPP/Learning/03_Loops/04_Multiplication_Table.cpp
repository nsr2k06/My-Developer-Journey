#include <iostream>
using namespace std;
int main(){
    //PRINTING THE TABLE OF N.

    int num;
    cout<<"Enter The Number For Which You Want To Print The Table: ";
    cin >> num;
	for (int i=1;i<=10;i++){
        cout<<num<<" x "<<i<<" = "<<i*num<<endl;
    }
    
    return 0;
}