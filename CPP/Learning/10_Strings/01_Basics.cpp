#include <iostream>
using namespace std;
int main(){
    //CHARACTER OF ARRAY KO HI STRING BOLTE HAIN !

    //METHOD 0
    char arr[]={'N','I','T','I','N'};

    //STRINGS COLLECTION OF CHAR !

    //METHOD 1
    string name="Nitin Singh Rajput";
    cout<<name<<endl;

    //METHOD 2
    string ip;
    cout<<"Enter Something For String :";
    cin >> ip;
    cout<<"Entered String is : "<<ip<<endl;

    //METHOD 3 using getline(cin,varstr);
    string user;
    cout<<"Enter USER Name : ";
    getline(cin,user);
    cout<<"User Naame is : "<<user<<endl;


    //INDEXING //UPDATING SAB KUJ APPLICABLE HAI STRING PAR !

   
    return 0;
}