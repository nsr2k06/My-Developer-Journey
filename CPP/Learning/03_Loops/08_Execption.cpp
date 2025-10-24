#include <iostream>
using namespace std;
int main(){
	int st;
	cout<<"Enter Starting Value : ";
	cin >> st;

	int end;
	cout<<"Enter Ending Value : ";
	cin >> end;

	int execption;
	cout << "Enter Execption Values : ";
	cin >> execption;

	for (int i=st; i<end; i++){
		
		if(i==execption) continue; //SKIP EXECPTION VALUE KO.
		cout<<i<< " ";
	}

	return 0;
}