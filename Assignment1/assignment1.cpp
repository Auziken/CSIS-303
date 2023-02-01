#include <string>
#include <fstream> // for reading files
#include <iostream>
#include "assignment1.hpp"
using namespace std;

arrayModifiers::arrayModifiers(){ // Constructor
    cout << "welcome back, sethbling here";
}


void arrayModifiers::readData(string givenPath){
    filename = givenPath;
    ifstream dataFile(filename);
    string currentLine;

    while (getline (dataFile, currentLine)){
        cout << currentLine;
    }
    dataFile.close(); // certified memory leak prevention moment
}