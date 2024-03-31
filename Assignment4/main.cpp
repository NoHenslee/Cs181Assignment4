// Author: Nolan Henslee
// BannerID: 001395753
// Course: CS 181
// Assignment: PA4
// Date Assigned: Monday, March 18, 2024
// Date/Time Due: Saturday, March 30, 2024 -- 11:55 pm
// Description: This program will exercise ObjectOriented concepts with C++.
// Certification of Authenticity:
// I certify that this assignment is entirely my own work


#include <iostream>
#include <string>
#include "Manager.h"
#include <vector>

using namespace std;

int nManagers = 0;
vector<Manager> managers;

int main() {
    double highestSalary = 0;
    int highestSalaryN = 0;
    double totalSalary = 0;
    cout << "Enter number of managers:";
    cin >> nManagers;
    for(int i = 0; i < nManagers; i++){
        string tempName;
        double tempWage;
        double tempHours;
        double tempBonus;
        cout << "Enter manager " << i << " name:";
        getline(cin.ignore(), tempName);
        cout << "Enter manager " << i << " hourly wage:";
        cin >> tempWage;
        cout << "Enter manager " << i << " hours worked:";
        cin >> tempHours;
        cout << "Enter manager " << i << " bonus:";
        cin >> tempBonus;
        Manager tempManager(tempName,tempWage,tempHours,tempBonus);
        managers.push_back(tempManager);
    }
    for(int i = 0; i < nManagers; i++){
        double tempPayment = managers[i].calcPay();
        if(tempPayment > highestSalary){
            highestSalary = tempPayment;
            highestSalaryN = i;
        }
        totalSalary = totalSalary + tempPayment;
    }
    cout << "Highest paid manager is : " << managers[highestSalaryN].getName() << " who is paid $" << highestSalary;
    cout << "\nAverage pay is: $" << totalSalary/nManagers;
}
