#include <iostream>
using namespace std;
int main(){

    //CHANGING THE VAUE OF THE Y FROM ADDRESS POV

    int y=100; //ORIGINAL
    int *ptr = &y; //STORING THE ADDRESS IN PTR 
    cout<<y<<endl;  //PRINTING THE ORIGINAL VALUE
    *ptr =150; //PTR ME JO STORED VALUE HAI USKO 150 KRDO
    cout<<y<<endl; // Y KI NEW VALUE AA GYI 150
  
    return 0;
}