#include <iostream>
#include <fstream>
#include <string>
#include <vector>
using namespace std;

int main() {
    ofstream myFile;
    myFile.open("TicketTerminal.txt");
    myFile << "This is your Ticket Terminal";
    myFile.close();
    
    
    system( "read -n 1 -s -p \"Press any key to continue...\"" ); //System("pause") that works for macOS
    return 0;
}
