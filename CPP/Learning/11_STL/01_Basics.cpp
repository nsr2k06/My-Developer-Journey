#include <iostream>
#include<algorithm>

using namespace std;
int main(){


    /* STL
        1) push_back('value'); (Last Me Value Ho Jaygi)
        2) pop_back('Value');  (Last Se Value Remove Ho Jygi)
        3) length(); (Length of the String Batata hai)
        4) clear(); (Empty String Kardega)
        5)  + ; (String Concatenation)
        6) reverse(s.begin(),s.end()); (String Ki Reversing)

    */

    cout<<"PUSH BACK"<<endl;
    string s="Hey NSR";
    cout<<s<<endl;
    cout<<"Length of the String is: "<<s.length()<<endl;

    s.push_back('8');
    cout<<s<<endl;
    cout<<"Length of the String is: "<<s.length()<<endl;

    s.push_back('5');
    cout<<s<<endl;
    cout<<"Length of the String is: "<<s.length()<<endl;

    cout<<endl;

    cout<<"POP BACK"<<endl;
    s.pop_back();
    cout<<s<<endl;
    cout<<"Length of the String is: "<<s.length()<<endl;

    cout<<endl;   
    cout<<"CLEAR THE STRING"<<endl;
    s.clear();
    cout<<"Length of the String is: 0 bcz EMPTY HO GYI HAI"<<s<<endl;

    cout<<endl;
    cout<<"String Manipulation "<<endl;
    string m="Morning";
    cout<<m<< " "<<m.length()<<endl;
  
    //METHOD 1
    m=m + " Sir";
    cout<<m<< " "<<m.length()<<endl;
    
    //METHOD 2
    m="Good "+m;
    cout<<m<< " "<<m.length()<<endl;
    return 0;
    
    cout<<endl;
    cout<<"Reverrsing String "<<endl;
    string nm="NSR";
    cout<<"Name is : "<<nm<<endl;
    reverse(nm.begin(),nm.end());
    cout<<"Reversed String : "<<nm;

}