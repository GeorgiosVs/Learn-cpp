#include <iostream>
#include <fstream>
#include <sys/stat.h>
#include <string>
using namespace std;

bool fileExists(const string& filePath) {
    struct stat buffer;
    return (stat(filePath.c_str(), &buffer) == 0);
}

int main(int argc, char *argv[]) {
    if (argc < 1) {
        cerr << "Error: Unable to determine program path." << endl;
        return 1;
    }
    
    // Extracting directory path from program path
    string programPath = argv[0];
    string programDir = programPath.substr(0, programPath.find_last_of("/\\"));

    // Specify the file name
    string fileName = programDir + "/tuna.txt";

    // Check if the file already exists
    if (fileExists(fileName)) {
        cout << "File already exists!\n";
    } else {
        // Open the file using the relative path
        ofstream file;
        file.open(fileName);

        if (file.is_open()) {
            file << "I love tuna and tuna loves me! Creating files is tricky\n";
            file.close();
            cout << "File created successfully!\n";
        } else {
            cout << "Failed to create file!\n";
        }
    }

    return 0;
}
