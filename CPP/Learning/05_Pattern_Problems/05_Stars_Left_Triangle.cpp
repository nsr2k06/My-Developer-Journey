#include <iostream>
using namespace std;
int main(){
    int n;
    cout << "Kitne Rows wala Left Triangle Chaiye : ";
    cin >> n;

    for(int i=1; i<=n; i++){ //ROWS
        for(int j=1; j<=i; j++){
            cout<<" * ";
        }
        cout<<endl;
    }
  
  
    return 0;
}
