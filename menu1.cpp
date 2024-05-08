#include <iostream>
using namespace std;
int main(){
	
	int num1;
	
	cout<<"Plhktrologhste apo to 1 mexri to 4: ";
	cin>>num1;
	
	if ((num1==1))
	{
		cout<<"\n1 - Print the word \"Hello\"";
	}
	if ((num1==2))
	{
		cout<<"\n2 - Print the number 2";
	}
	if ((num1==3))
	{
		cout<<"\n3 - Print \"Bye Bye\"";
	}
	if ((num1==4))
	{
		cout<<"\nDon't do anything.";
	}
	if (num1!='1' && num1!='2' && num1!='3' && num1!='4')
	cout<<"Wrong Choice"<< endl;
	
	
	
}
