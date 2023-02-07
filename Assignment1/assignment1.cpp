#include <string>
#include <fstream> // for reading files
#include <iostream>
#include "assignment1.hpp"
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
        index++;
    }

    
    dataFile.close(); // No memory leaks here.
}

int arrayModifiers::checkArray(int givenNum){
    bool foundNum = false;
    int index = 0;

    while(foundNum == false){
        if (index > currentArraySize){ // Poor man's try/catch
            cout << "Number not found in array.\n";
            foundNum = true;
        }
        else if (numArray[index] != givenNum){
            index++;
        }
        else{
            cout << "Number '" << givenNum << "' found at index '" << index << "'.\n";
            foundNum = true; // oops
        }
    }
}

int arrayModifiers::replaceArray(int givenIndex, int givenNum){
    try{
        if(givenIndex > currentArraySize || givenIndex < 0){
            throw out_of_range("oops");
        }

        cout << "You are replacing index " << givenIndex << ", which is currently " << numArray[givenIndex]<< ". It will now be changed to " << givenNum << ".\n";
        numArray[givenIndex] = givenNum; // Should just be this.

    } catch (out_of_range){
        cout << "Error. The given index is out of range of the array. The array's current size is " << currentArraySize << ", but has an absolute max of 150. Please try a different number.\n";
    }
}

int arrayModifiers::addArray(int givenNum){
    try{
        if(currentArraySize >= 150){
            throw out_of_range("oops");
        }

        cout << "Adding number '" << givenNum << "' at index '" << currentArraySize+1 << "'.\n";
        numArray[currentArraySize] = givenNum; // i really enjoy how arrays start at 0. this should really be currentArraySize+1 but NO thats index 101 which is NOT the last index. very disappointing c++ do better
        currentArraySize += 1;
    } catch (out_of_range){
        cout << "Error. The number cannot be added to the end of the array, as the array has reached its max size of 150.";
    }
}

int arrayModifiers::removeArray(int givenIndex){
    cout << "Removing '" << numArray[givenIndex] << "' at index '" << givenIndex << "'.\n";
    numArray[givenIndex] = 0; // I'll try to figure out how to remove this number and move everything accordingly sometime later.
}

void arrayModifiers::printArray(){
    for (int i = 0; i < currentArraySize; i++){
        cout << numArray[i] << " || ";
    }
    cout << "\n";
}