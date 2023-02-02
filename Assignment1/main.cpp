#include <string>
#include <fstream> // for reading files
#include <iostream>
#include <vector>
#include "assignment1.hpp"
using namespace std;

int main(){
    arrayModifiers test; // Creates an object "test" under the arrayModifiers class.
    string userAnswer;

    test.readData("data.txt"); // Load the text file into the array.
    cout << "Data file read. Continue operation.\nWhat would you like to do?\n1. Find number in array.\n2. Modifiy existing number.\n3. Add new number.\n4.'Delete' a number.\n5. Display array.\nInput: ";
    
    cin >> (userAnswer); // i think theres a way to do this inside of an if/switch statement
    
    int testnum = std::stoi (userAnswer); // there is 110% a better way to do this
    switch(testnum){
        case 1:
            cout << "-----\nWhich number would you like to look for?\nInput: ";
            cin >> userAnswer;
            testnum = std::stoi (userAnswer);
            test.checkArray(testnum);
    }


    return 0; // It's an int class.
}