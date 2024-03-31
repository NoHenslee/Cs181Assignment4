//
// Created by seatu on 3/30/2024.
//

#ifndef ASSIGNMENT4_MANAGER_H
#define ASSIGNMENT4_MANAGER_H

#include "Employee.h"
#include <string>
using namespace std;

class Manager : public Employee {
private:
    float bonusAmount;
public:
    double calcPay() const;
    Manager (string theName, double theWage, double theHours, double theBonus);
};
#endif //ASSIGNMENT4_MANAGER_H
