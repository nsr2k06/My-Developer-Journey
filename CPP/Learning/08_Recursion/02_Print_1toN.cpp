#include <iostream>
using namespace std;
//METHOD 1
void pn(int st){
    for (int i=1;i<=st;i++){
        cout<<i<<" ";
    }
}

int main(){
    int n;
    cout << "Enter The Number Jidar Se Start krna hai : ";
    cin >> n;

    int m;
    cout<< "Enter The Number Jidar Stop krna hai : ";
    cin >> m;

    pn(m);
    cout<<endl;
    
    return 0;
}