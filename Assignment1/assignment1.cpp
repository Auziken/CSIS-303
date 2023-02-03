#include <string>
#include <fstream> // for reading files
#include <iostream>
#include "assignment1.hpp"
#include <vector>
using namespace std;

arrayModifiers::arrayModifiers(){ // Constructor
    // Do I need to put anything here?
}


void arrayModifiers::readData(string givenPath){
    filename = givenPath;
    ifstream dataFile(filename);
    int num;
    int index = 0;

    while (dataFile >> num){ // This is a bit tricky. Apparently the input stream knows how to separate everything else from the integers, coupled by the fact that 'num' is an integer as well.
        numArray[index] = num;
        // cout << numArray[index] << " || ";
        index++;
    }

    
    dataFile.close(); // certified memory leak prevention moment
}

int arrayModifiers::checkArray(int givenNum){
    bool foundNum = false;
    int index = 0;

    while(foundNum == false){
        if (index > currentArraySize){ // Poor man's try/catch
            cout << "Number not found in array.";
            foundNum = true;
        }
        else if (numArray[index] != givenNum){
            index++;
        }
        else{
            cout << "Number '" << givenNum << "' found at index '" << index << "'.";
            foundNum = true; // oops
        }
    }
}

int arrayModifiers::replaceArray(int givenIndex, int givenNum){
    cout << "You are replacing index " << givenIndex << ", which is currently " << numArray[givenIndex]<< ". It will now be changed to " << givenNum << ".\n";
    numArray[givenIndex] = givenNum; // It should just be this
}

int arrayModifiers::addArray(int givenNum){
    cout << "lool!!!";
}

int arrayModifiers::removeArray(int givenIndex){
    cout << "lool!!!";
}

void arrayModifiers::printArray(){
    for (int i = 0; i < currentArraySize; i++){
        cout << numArray[i] << " || ";
    }
    cout << "\n";
}