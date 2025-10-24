#include <iostream>
using namespace std;
int main(){

    /*WAP TO FIND THE HIGHEST FACTOR OF A NUMBER N.
    24= 1 2 3 4 6 8 12 24
    Highest Factor 12 (Execpt Itself)
    */

    int num,num2,num3;
    cout<<"Enter The Number 1 2 & 3 : ";
    cin >> num >> num2 >> num3;

    //METHOD 1
    int fact=1;
    for (int i=1; i<num;i++){
        if (num%i==0){
            fact=i;
        }
    }

    cout<<"Highest Factor of "<<num<<" is :"<< fact<<endl;

    //METHOD 2
    int fact1=1;
    for (int i=1; i<=num2/2;i++){
        if (num2%i==0){
            fact1=i;
        }
    }

    cout<<"Highest Factor of "<<num2<<" is :"<< fact1<<endl;

    //METHOD 3
    int fact3=1;
    for (int i=num3/2; i>=1;i++){
        if (num3%i==0){
            fact3=i;
            break; //LOOP TODH DO IMMEDIATELY
        }
    }
    cout<<"Highest Factor of "<<num3<<" is :"<< fact3<<endl;

	return 0;
}