#include "assignment2.hpp"
#include "employee.hpp"
#include <iostream>
using namespace std;


int main(){
    Single_Linked_List ohyeah;
    string userChoice, userValue, userValue2; // i did not learn my lesson
    bool trappedforEternity = true;

    while (trappedforEternity == true){
        cout << "Would you like to 1. use the singly linked list or 2. do the employee data thing?"; // I genuinely don't know how either of these parts connect with each other, so I guess I'll just separate them.
        cin >> userChoice;
        if (userChoice == "1"){
            // I know it's absolutely horrible practice to jam all of this inside of an if statement but I DONT CARE!!!
            
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
        if (userChoice == "2"){
            string firstname, lastname, hoursworked, hourlyrate;

            cout << "Enter employee's first name: ";
            cin >> firstname;
            cout << "Enter employee's last name: ";
            cin >> lastname;
            cout << "Enter employee's hours worked this week: ";
            cin >> hoursworked;
            cout << "Enter employee's hourly rate: ";
            cin >> hourlyrate;
            int numworked = stoi(hoursworked);
            int numrate = stoi(hourlyrate);
            cout << "Finally, is this employee a 1. professional or 2. nonprofessional?: ";
            cin >> userChoice;
            if (userChoice == "1"){
                // Professional
                Employee* testguy = new ProfessionalEmployee(firstname, lastname, numworked, numrate);
                cout << "-----\n";
                int moneymade = testguy->weeklySalary(numworked, numrate); // make sure this actually returns a number
                cout << "\n-----\n";
                testguy->healthCare(moneymade);
                cout << "\n-----\n";
                testguy->vacationDays(numworked);
                trappedforEternity = false;
            }
            if (userChoice == "2"){
                // Nonprofessional
                Employee* testguy = new NonProfessionalEmployee(firstname, lastname, numworked, numrate);
                cout << "-----\n";
                int moneymade = testguy->weeklySalary(numworked, numrate); // make sure this actually returns a number
                cout << "\n-----\n";
                testguy->healthCare(moneymade);
                cout << "\n-----\n";
                testguy->vacationDays(numworked);
                trappedforEternity = false;
                
            }
            else{
                cout << "Invalid input. Try again.";
            }   
        };
    }
    
    
    
    return 0;
}