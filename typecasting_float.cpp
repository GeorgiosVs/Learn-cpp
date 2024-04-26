//Program in Cpp typecasting changing an integer to float
#include <iostream>
using namespace std;
int main() {
    
    int i;
    
    for (i=1; i<=100; ++i ) {
        cout << i << "/ 2 is: " << (float) i / 2 << endl;
    }
    
    return 0;
}
