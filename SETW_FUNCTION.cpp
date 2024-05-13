#include <iostream>
#include <iomanip>
using namespace std;
int main(){
	
	int a,b,c;
			
	cout << left << setw(24) <<"Dwse ton 1o arithmo:";
	cin>>a;
	
	cout << setw(24) << "Dwse ton 2o arithmo:";
	cin>>b;
	
	cout << setw(24) << "Dwse ton 3o aritmo:";
	cin>>c;
	

	cout << setw(24) << "To athroisma twn"<< a << "," << b << "," << c << "," <<" einai " << (a+b+c)<<endl;
	
	cout << setw(24)<< "To ginomeno twn"<< a << "," << b << "," << c << "," <<" einai " << (a*b*c)<<endl;
	
	cout << setw(24) << "O mesos oros twn"<< a << "," << b << "," << c << "," <<" einai " << ((a+b+c)/3)<<endl;
	
	return 0;
}

/*Akhsh morphopoihshs me function setw(n) prepei na exoyme kai thn biblio8hkh <iomanip>
Function setw(n) morphopoiei ton elaxisto arithmo thesewn xarakthrwn
C++*/
