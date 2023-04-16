#include <string>
#include <iostream>
#include "part1.hpp"
#include "part2.hpp"

using namespace std;

int main(){  
    string givenInfix, userChoice, userChoice2, givenString;
    Infix object;
    queueImp myQueue;
    bool trappedforeternity = true;

    
    cout << "Would you like to...\n1. Do infix to postfix\n2. Implemented Stack\nChoose: ";
    cin >> userChoice;
    getline(cin, userChoice2); // it kept eating the first input and turning it into a postfix statement for some reason

    if (userChoice == "1") {
        cout << "Give an infix expression: ";
        getline(cin, givenInfix);

        cout << "Your postfix expression is... " << object.convertToPostfix(givenInfix) << "\n";
    } 
        
    else if (userChoice == "2") {
        while (trappedforeternity == true){
            cout << "Would you like to...\n1. Insert new element.\n2. Remove front element.\n3. Return front element.\n4. Check if queue is empty.\n5. Return number of elements.\n6. Quit.\nChoose: ";
            cin >> userChoice2;
            switch (stoi(userChoice2)){
                case 1:
                    cout << "What string would you like to insert?: ";
                    cin >> givenString;
                    myQueue.insertRear(givenString);
                    break;
                case 2:
                    cout << "Removed " << myQueue.removeFront() << " from front of queue.\n";
                    break;
                case 3:
                    cout << "The front element is: " << myQueue.popFront() << "\n";
                    break;
                case 4:
                    if (myQueue.queueEmpty()){
                        cout << "Queue is empty.\n";
                    }
                    else{
                        cout << "Queue is not empty.\n";
                    }
                    break;
                case 5:
                    cout << "There are " << myQueue.queueSize() << " elements.\n";
                    break;
                case 6:
                    cout << "Exiting.\n";
                    trappedforeternity = false;
                    break;
                default:
                    cout << "Invalid argument given. Try again.\n";
            }
        }
    }
    
    else {
        cout << "Invalid answer.";
    }
    
    return 0;
}
