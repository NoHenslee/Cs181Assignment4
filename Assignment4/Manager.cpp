//
// Created by seatu on 3/30/2024.
//

#include "Manager.h"
#include "Employee.h"
#include <string>
using namespace std;

double Manager::calcPay() const
{
    double temp = wage * hours;
    return temp + bonusAmount;
    }

Manager::Manager(string theName, double theWage, double theHours, double theBonus) : Employee::Employee(theName, theWage, theHours){
    bonusAmount = theBonus;
}