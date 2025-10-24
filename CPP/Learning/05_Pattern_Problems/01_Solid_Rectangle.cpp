#include <iostream>
using namespace std;
int main(){

          // r--> rows 
          // c--> columns
          // st--> stars

      int c;
      cout << "Enter The Columns: ";
      cin >> c;
    
      int r;
      cout << "Enter The Rows: ";
      cin >> r;


      for(int i=1; i<=r; i++){
        for(int j=1;j<=c;j++){
          cout<<" * ";
        }
          cout<<endl;
      }
    
    return 0;
}
