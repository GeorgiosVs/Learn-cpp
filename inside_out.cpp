//
//  myfunc
//
//  Created by Γεώργιος Βάσσιου on 10/4/24.
//

#include <iostream>
using namespace std;

void myfunc();

int main() {
    cout << "In main() " << endl;
    myfunc();
    cout << "Back in main() " << endl;
    
    return 0;
}
void myfunc(){
    cout << "Inside myfunc() " << endl;
}
