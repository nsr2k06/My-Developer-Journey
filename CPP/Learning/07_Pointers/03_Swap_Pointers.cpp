#include <iostream>
using namespace std;

void swap(int *a,int *b){
    int temp =*a;
    *a=*b;
    *b=temp;

}
int main(){
    int x , y;
    cout << "Enter 1st & 2nd Number: ";
    cin >> x >> y ;

    cout<<endl;
    
    cout<<"Before Swapping : "<< x <<" "<< y <<endl;
    swap(&x ,&y);
    
    cout<<"After Swapping : "<< x << " "<< y<<endl;
    return 0;
}