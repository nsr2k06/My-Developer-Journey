#include <iostream>
using namespace std;
int main(){
    
    //ADDING TWO MATRIX USING 2D ARRAY AND LOOPS !
    cout<<"Taking Input in MATRIX 1 :-"<<endl;

    int r;
    cout << "Enter Rows For Matrix 1 : ";
    cin >> r;

    int c;
    cout << "Enter Columns For Matrix 1: ";
    cin >> c;

    int matrix[r][c];

    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            cout<<"Enter Row "<<i<<" Coloumn "<<j<<" Element : ";
            cin>>matrix[i][j];
        }
    }
    
    int matrix2[r][c];
    cout<<"Enter Values For MATRIX 2 :-"<<endl;
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            cout<<"Enter Row "<<i<<" Coloumn "<<j<<" Element : ";
            cin>>matrix2[i][j];
        }
    }

    cout<<"MATRIX 1 :-"<<endl;
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            cout<<matrix[i][j]<< " ";
        }
        cout<<endl;
    }


    cout<<"MATRIX 2 :-"<<endl;
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            cout<<matrix2[i][j]<< " ";
        }
        cout<<endl;
    }
    
    int am[r][c];
    cout<<"Addition of Both the Matrix :- "<<endl;
    for(int m=0;m<r;m++){
        for(int n=0;n<c;n++){
            am[m][n]=matrix[m][n]+matrix2[m][n];
            cout<<am[m][n]<< " ";
        }
        cout<<endl;
    }

    return 0;
}   