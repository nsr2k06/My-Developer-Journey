#include <iostream>
using namespace std;
int main(){
    int n;
    cout << "Enter The Number of Rows : ";
    cin >> n;
  
     for(int i=1; i<=n; i++){ //ROWS
        for(int j=1; j<=i; j++){ //COLUMNS
            if((i+j)%2==0) cout<<1<<" ";
            else cout<<0<<" ";
            }
        cout<<endl;
    }
}