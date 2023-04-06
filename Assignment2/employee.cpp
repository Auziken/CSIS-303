#include <string>
#include <iostream>
#include "employee.hpp"
using namespace std;

Employee::Employee(string firstname, string lastname){

}
double Employee::weeklySalary(int hoursworked, int hourlyrate){

}
int Employee::healthCare(int paycheck){

}
int Employee::vacationDays(int hoursworked){
    
}


// NONPROFESSIONAL
double NonProfessionalEmployee::weeklySalary(int hoursworked, int hourlyrate){
    double computedsalary = ((hoursworked * hourlyrate)/3); // dividing it by 3 is just some completely random arbitrary thing just to differentiate the two
    cout << "Weekly salary is: " << computedsalary;
    return computedsalary;
}
int NonProfessionalEmployee::healthCare(int paycheck){
    cout << "With the employee making " << paycheck << ", you will have " << (paycheck*.10) << " dollars deducted for health care.";
}
int NonProfessionalEmployee::vacationDays(int hoursworked){
    cout << "Since you are a nonprofessional employee, you get " << (hoursworked/70) << " days of vacation from working.";
}

// PROFESSIONAL
double ProfessionalEmployee::weeklySalary(int hoursworked, int hourlyrate){
    double computedsalary = (hoursworked * hourlyrate);
    cout << "Weekly salary is: " << computedsalary;
    return computedsalary;
}
int ProfessionalEmployee::healthCare(int paycheck){
    cout << "With the employee making " << paycheck << ", you will have " << (paycheck*.05) << " dollars deducted for health care.";
}
int ProfessionalEmployee::vacationDays(int hoursworked){
    cout << "Since you are a professional employee, you get 3 free days of vacation, plus " << (hoursworked/50) << " extra days from working. hooray!!!"; // woopee
}