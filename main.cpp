#include <iostream>
#include <fstream>
#include <vector>
using namespace std;

int main() {
    ifstream inFile;
    inFile.open ("../Students");
    string name;
    vector <string> names;
    while (!inFile.eof()) {
        getline(inFile, name,',');
        if (!name.empty()) {
            names.push_back(name);
        }
    }
    for (string n : names) {
        cout << n;
    }


    return 0;
}