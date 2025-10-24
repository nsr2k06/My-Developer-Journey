#include <iostream>
using namespace std;
int main(){
    int arr1[5]; //1D ARRAY

    int arr2[3][4]; //2D ARRAY --> 3 Row x 4 Column 
                    /*
                    Indexing:-
                    Row 1 --> 00,01,02,03 fir row 2 me 
                    Row 2 --> 10,11,12,13 fir row 3 me
                    Row 3 --> 20,21,22,23 Ended
                    */
  
    int ex[4][2]={{1234,56},{1256,56},{9867,65},{5643,67}}; //Rows ME Rows 
    int arr3[2][3][4]; //3D ARRAY


  
    cout<<"Taking Input in 2D Array using Looping :-"<<endl;

    int r;
    cout << "Enter Rows : ";
    cin >> r;

    int c;
    cout << "Enter Columns : ";
    cin >> c;

    int matrix[r][c];

    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            cout<<"Enter Row "<<i<<" Coloumn "<<j<<" Element : ";
            cin>>matrix[i][j];
        }
    }

    cout<<"Printing  The 2D Array :-"<<endl;
    
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            cout<<matrix[i][j]<< " ";
            
        }

    }
    return 0;
}