#include <string>
#include <iostream>
#include "part1.hpp"

using namespace std;

int main(){  
    string givenInfix;
    Infix object;

    cout << "Give an infix expression: ";
    getline(cin, givenInfix); // I completely forgot that cin only reads up to the first whitespace.........

    cout << "Your postfix expression is... " << object.convertToPostfix(givenInfix);
}  