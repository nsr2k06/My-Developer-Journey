#include <iostream>
using namespace std;
int main(){
    //WAP TO CHECK WHETHER THE AREA OF RECTANGLE IS GREATER THEN THE PERIMETER OF RECTANGLE OR NOT.

    float l,b;
    cout << "Enter The LENGTH and BREADTH of The Rectangle : ";
    cin >> l >> b;

    float area=l*b;
    float prm = 2*(l+b);

    cout <<"Area of Rectangle : "<<area<<endl;
    cout << "Perimeter of Rectangle : "<<prm <<endl;

    if (area==prm){
        cout<<"Area of Rectangle is Equal to the Perimeter of the Rectangle"<<endl;
    }else if (area>prm){
        cout<<"Area of Rectangle is Greater Then the Perimeter of the Rectangle"<<endl;
    }else {
        cout<<"Area of Rectangle is Less Then the Perimeter of the Rectangle"<<endl;
    }

    return 0;
}