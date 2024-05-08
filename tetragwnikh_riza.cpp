#include<iostream>
#include<cmath>
#include<iomanip>
using namespace std;
int main(){
	
		int N;
		float Riza;
		
		cout<<"Dwste enan akeraio arithmo: ";
		cin>>N;
		
		if(N>=0){
			Riza=sqrt(N);
			cout<<fixed<<setprecision(2)<<"H tetragwniki riza toy arithmoy einai: "<<Riza;
		}
		
		else{
			cout<<"Error";
		}
	
	
	
}
