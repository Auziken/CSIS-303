#include <string>
#include <fstream> // for reading files
#include <iostream>
#include <vector>
using namespace std;

class arrayModifiers {
    public:
        void readData(string); // This will open and output the lines of the file into an array.

        
        int checkArray(int); // Checks for given integer.
        int replaceArray(int , int); // Replace given index with given number.
        int addArray(int); // Adds number to end of array.
        int removeArray(int); // Removes number at given index.

        void printArray(); // Prints array.

        arrayModifiers(); // Constructor?
        

    private:
        string filename;
        int currentArraySize = 100; // this is just so i can print the appropriate amount of spaces and stop printing out gibberish
        int numArray[150]; // i think i need to intialize the array here so that the class' methods can use it
};
