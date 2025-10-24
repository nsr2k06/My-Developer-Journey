#include<iostream>
using namespace std;
int main(){
    //CHECK WHETHER THE ENTERED NUMBER IS THREE DIGIT OR NOT.
    int n;
    cout <<"Enter The Number  :";
    cin >> n;

    if (n>99 && n<1000){ //BOTH THE CONDITIONS MUST BE TRUE. (UNION)
        cout<<n<<" : is Three Digit Number"<<endl;
    }
    else {
        cout<<n<<" : is Not a Three Digit Number"<<endl;
    }

    return 0;
}
