//Program in Cpp with logical function condition bool dor()
#include <iostream>
using namespace std;
bool dor(bool y, bool x);

int main() {
   
    bool p, q;
    
    cout << "Enter P (0 or 1): ";
    cin>>p;
    cout << "Enter Q (0 or 1): ";
    cin>>q;
    
    cout << "P AND Q: " << (p && q) << "\n";
    cout << "P OR Q: " << (p || q) << "\n";
    cout << "P DOR Q: " << dor(p, q)<< "\n";
    
    return 0;
}

//bool dor works like if both are true dor equals to 0 (false) if one of the two is true dor equals to 1 (true)
bool dor(bool y, bool x){
    return (y || x) && !(y && x);
}
