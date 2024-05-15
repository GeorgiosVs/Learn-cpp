#include<iostream>
#include<iomanip>
using namespace std;
int main(){
		int b;
		float bmi;
		float height;
		float kila;
		float a=18.5;
		
		cout<<"Posa kila eiste: ";
		cin>>kila;
		
		bmi = (kila/height*height);
		
		if(bmi<=a){
			cout<<"Lipovarhs "<< endl;
		}
		else if(bmi>=a && bmi<=b){
			cout<<"Kanonikos";
		}
	
	
}
