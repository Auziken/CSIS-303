#include <string>
#include <fstream> // for reading files
#include <iostream>
#include <vector>
#include "assignment1.hpp"
using namespace std;

int main(){
    arrayModifiers test; // Creates an object "test" under the arrayModifiers class.
    string userAnswer, userAnswer2; // probably the worst variable naming ever

    test.readData("data.txt"); // Load the text file into the array.
    cout << "Data file read. Continue operation.\nWhat would you like to do?\n1. Find number in array.\n2. Modifiy existing number.\n3. Add new number.\n4.'Delete' a number.\n5. Display array.\nInput: ";
    
    cin >> (userAnswer); // i think theres a way to do this inside of an if/switch statement
    int userAnswerNum = stoi(userAnswer);
    
    int selectedIndex, selectedNum;
    switch(userAnswerNum){
        case 1:
            cout << "-----\nWhich number would you like to look for?\nInput: ";
            cin >> userAnswer;
            selectedIndex = stoi(userAnswer); // there is 110% a better way to do this
            test.checkArray(selectedIndex);

        case 2:
            cout << "-----\nWhich index do you want to modify?\nInput: ";
            cin >> userAnswer;
            selectedIndex = stoi(userAnswer);
            cout << "\nWhat number do you want to replace it with?\nInput:";
            cin >> userAnswer2;
            selectedNum = stoi(userAnswer2);
            test.replaceArray(selectedIndex, selectedNum);

        case 3:
            cout << "-----\nWhat number do you want to add at the end of the array?\nInput: ";
            cin >> userAnswer;
            selectedNum = stoi(userAnswer);
            test.addArray(selectedNum);
            
        case 4:
            cout << "-----\nWhat index do you want to delete?\nInput: ";
            cin >> userAnswer;
            selectedIndex = stoi(userAnswer);
            test.removeArray(selectedIndex);

        case 5:
            cout << "-----";
            cout << "no";
            // i need to make an array printing method
            }
        
        
    return 0;
}