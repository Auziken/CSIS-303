#include "assignment2.hpp"
#include <iostream>
using namespace std;


int main(){
    Single_Linked_List ohyeah;
    string userChoice, userValue, userValue2; // i did not learn my lesson
    bool trappedforEternity = true;

    while (trappedforEternity == true){
    cout << "\n-----\nWhat would you like to do?\n1. Push front.\n2. Push back.\n3. Pop front.\n4. Pop back.\n5. Front.\n6. Back.\n7. Empty list.\n8. Insert at index.\n9. Remove at index.\n10. Find value.\n11. Quit.\nSelect: ";
    cin >> userChoice;

    
        switch (stoi(userChoice)){ // stoi...
            case 1:
                cout << "Enter value to push to front.";
                cin >> userValue;
                ohyeah.push_front(stoi(userValue));
                break;
            
            case 2:
                cout << "Enter value to push to back.";
                cin >> userValue;
                ohyeah.push_back(stoi(userValue));
                break;

            case 3:
                ohyeah.pop_front();
                break;

            case 4:
                ohyeah.pop_back();
                break;

            case 5:
                ohyeah.front();
                break;
            
            case 6:
                ohyeah.back();
                break;

            case 7:
                ohyeah.empty();
                break;

            case 8:
                cout << "Enter index you want to insert at.";
                cin >> userValue;
                cout << "Enter value to place at index.";
                cin >> userValue2;
                ohyeah.insert(stol(userValue), stoi(userValue2)); // trying stol was a complete guess but it actually works
                break;

            case 9:
                cout << "Enter index you want to remove.";
                cin >> userValue;
                ohyeah.remove(stol(userValue));
                break;

            case 10:
                cout << "Enter value you want to find.";
                cin >> userValue;
                ohyeah.find(stoi(userValue));
                break;

            case 11:
                cout << "bye bye!";
                trappedforEternity = false;
                break;

            default:
                cout << "Invalid number given.";
                break;
        }
    }
    return 0;
}