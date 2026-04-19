/**
 * @file Officer.cpp
 * @brief The implemented Officer class
 *
 */
#include "Officer.h"
#include <iostream>

using namespace std;

/** @brief Constructor that controls evilness */
Officer::Officer() {
  evilness = 500;
}

/** @brief Parameterized constructor that passes the values from the origonal base class */
Officer::Officer(int ID, int years, double hourlyRate, float hoursWorked, double evilness) : Employee(ID, years, hourlyRate, hoursWorked) {
  this->evilness = evilness;
}

/** @brief This is the implemented ebvlness levels */
void Officer::print() {
  Employee::print();
  cout << " Evilness: " << evilness << endl;
}
/** @brief The implemented pay calculation and evilness bonus */
double Officer::calculatePay() {
  return (hourlyRate + evilness) * hoursWorked;
}
