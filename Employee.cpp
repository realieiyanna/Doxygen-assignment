/**
 * @file Employee.cpp
 * @brief This is the implementation file for the employee class
 */
#include "Employee.h"
#include <iostream>

using namespace std;

/** @brief Dewfault Constructor */
Employee::Employee() {
  ID = years = hoursWorked = hourlyRate = -1;
}

/** @breif Parameterized Consturctor */
Employee::Employee(int ID, int years, double hourlyRate, float hoursWorked) {
  this->ID = ID;
  this->years = years;
  this->hourlyRate = hourlyRate;
  this->hoursWorked = hoursWorked;
}

/** @brief The implemented print method */
void Employee::print() {
  cout << "Printing information for employee " << ID << ":\n Years Employed: " << years
       << "\n Hourly Rate: " << hourlyRate << "\n Hours Worked: " << hoursWorked
       << endl;
}

/** @brief The implemented anniversary method */
void Employee::anniversary() {
  years++;
  hourlyRate = hourlyRate + hourlyRate * .002;
  cout << "Congratulations to employee " << ID << " on " << years << " year(s) at company!"
       << endl;
}

/** @brief The implemented calculatePay method */
double Employee::calculatePay() {
  return hourlyRate * hoursWorked;
}

