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

        arrayModifiers(); // Constructor?
        

    private:
        string filename;
};
