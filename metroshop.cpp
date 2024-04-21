#include <iostream>
using namespace std;
int main(int argc, const char * argv[]) {
    
    int ar,kat,duo,ena,penhnta,eiko,deka,sun2;
    float kostos,sunolo;
    
    cout << "Dwste thn epilogh kathgorias:\n1.Foititiko\n2.Polyteknwn\n3.Kanoniko\nGive your choice :";
    cin>>kat;
    
    switch (kat) {
        case 1:
            cout << "Epilexate to Foititiko Eishthrio" << endl;
            kostos=0.5;
            break;
        case 2:
            cout << "Epilexate to Polyteknwn Eishthrio" << endl;
            kostos=0.4;
            break;
        case 3:
            cout << "Epilexate to Kanoniko Eishthrio" << endl;
            kostos=0.7;
            break;
        
        default: cout << "Den epelexes kanena eishthrio pou yparxei" << endl;
            exit(1);
    }
    cout << "Dwse to plithos eishthriwn :";
    cin>>ar;
    sunolo=ar*kostos;
    sun2=sunolo*100;
    
    cout << "To sunoliko kostos einai :" << sunolo << endl;
    
    duo= sun2/200;
    sun2 %= 200;
    
    ena= sun2/100;
    sun2 %= 100;
    
    penhnta= sun2/50;
    sun2 %= 50;
    
    eiko= sun2/20;
    sun2 %= 20;
    
    deka= sun2/10;
    sun2 %= 10;
    
    cout << "Tha prepei na plhrwseis:\n";
        if (duo > 0)
            cout << duo << " Kermata twn 2 euro\n";
        if (ena > 0)
            cout << ena << " Kermata twn 1 euro\n";
        if (penhnta > 0)
            cout << penhnta << " Kermata twn 0.50 cent\n";
        if (eiko > 0)
            cout << eiko << " Kermata twn 0.20 cent\n";
        if (deka > 0)
            cout << deka << " Kermata twn 0.10 cent\n";
    return 0;
}
