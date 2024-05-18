#include <iostream>
using namespace std;
int main(){
	
	int poso;
	
	cout<<"Give the amount to euro: ";
	cin>>poso;
	
	int a50=poso/50;
	int a10=poso%50/10;
	int a5=poso%10/5;
	
	cout<<"The amount of "<<poso<< " euro can be spilled to"<<endl;
	cout<<a50<< " of 50 euros"<<endl<<
	a10<<" of 10euros"<<endl
	<<a5<<" of 5 euros"<<endl;
	
	return 0;
	
}
