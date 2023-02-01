#include <string>
#include <fstream> // for reading files
#include <iostream>
#include "assignment1.hpp"
#include <vector>
using namespace std;

arrayModifiers::arrayModifiers(){ // Constructor
    cout << "THIS SHOULDNT BE SHOWING UP ///  "; // WHAT DO I PUT HERE
}


void arrayModifiers::readData(string givenPath){
    int numArray[100];
    filename = givenPath;
    ifstream dataFile(filename);
    int num;
    int index = 0;

    while (dataFile >> num){ // This is a bit tricky. Apparently the input stream knows how to separate everything else from the integers, coupled by the fact that 'num' is an integer as well.
        numArray[index] = num;
        cout << numArray[index] << " || ";
        index++;
    }

    
    dataFile.close(); // certified memory leak prevention moment
}