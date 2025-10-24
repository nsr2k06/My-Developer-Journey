#include <iostream>
using namespace std;
int main(){
    //DISPLAY THE AP - 1,3,5,7,9.... UPTO n NUMBERS.
    //AP FORMULA [An=a+(n-1)d] 
    int num;
    cout<<"Enter The Number ";
    cin >> num;

    //1 3 5 7 9 11 .....
    //Start 1 
    //Differnce 2
    for (int i=1; i<=2*num-1;i+=2){
        cout <<i<< " ";

    }
    cout <<endl;
    //4 7 10 13 ......
    //Start 4
    //Difference 3
    for (int j=4;j<=3*num+1;j+=3){
        cout<<j << " ";
        
    }
	return 0;
}