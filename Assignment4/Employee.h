//
// Created by seatu on 3/30/2024.
//

#ifndef ASSIGNMENT4_EMPLOYEE_H
#define ASSIGNMENT4_EMPLOYEE_H
#include <string>
using namespace std;

class Employee
{
protected:
    string name;
    double wage;
    double hours;
public:
    // Create a new employee
    Employee(string theName, double theWage, double theHours);
    // Calculate the employee’s pay.
    double calcPay() const;
    string getName () const;
};

#endif //ASSIGNMENT4_EMPLOYEE_H
