//Ypologismos emvadou kai perifereias me morphopoihseis
#include <iostream>
#include <iomanip>
#define pi 3.14159
using namespace std;
int main(){
	
	//Metavlhtes
	float radius,area,per;
	
	cout << "Parakalw dwste thn aktina tou kyklou: ";
	cin>>radius;
	
	/*Emvadon*/ area=pi*radius*radius;
	/*Perifereia*/ per=2*pi*radius;
	
	cout << left << setw(24) << "O kyklos me aktina " << fixed
	<< right << setw(12) << setprecision(3) << radius << endl
	<< left << setw(24) << "exei emvadon "
	<< fixed << right << setw(12) << setprecision(3) << area << endl
	<< left << setw(24) << "kai perifereia ish me: "
	<< fixed << right << setw(12) << setprecision(3) << per << endl;
	
	system("pause");
}

/*To pi mporoyme na to dhlwsoyme kai me #define pi = 3.14159
Function (fixed) morphopoiei thn . sto dekadiko
Function (left) morphopoiei thn stoixish pros ta aristera
Function setprecision(n) morphopoiei ton arithmo twn dekadikwn psifiwn tis ypodiastolis
Function setw(n) morphopoiei ton elaxisto arithmo thesewn xarakthrwn
C++*/
