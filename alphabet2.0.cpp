#include <iostream>
#include<cstdlib>
using namespace std;
int main(int argc, const char * argv[]) {
    
    int char1=0;
    int char2=0;
    char ch1='a';
    char ch2='A';
    do {
        char1=int(ch1);
        
        cout << ch1 << " \n";
        char1++;
        ch1=char(char1);
        
        
    } while (ch1<='z');
    
    do {
        char2=int(ch2);
        
        cout << ch2 << "\t ";
        char2++;
        ch2=char(char2);
        
        
    } while (ch2<'Z');
    
    
    return 0;
}
//Program in cpp
//runs the alphabet with dowhile{} until reaches z and Z using a method called typecasting
//example char1=int(ch1);
