/**
 * @file Supervisor.cpp
 * @brief The supervisor class being implemented
 */
#include "Supervisor.h"
#include <iostream>

using namespace std;

/** @brief Constructor for the Supervisor class */
Supervisor::Supervisor() {
  numSupervised = -1;
}

/** @brief The parameterized constructor that sets the supervised count */
Supervisor::Supervisor(int ID, int years, double hourlyRate, float hoursWorked, int numSupervised) : Employee(ID, years, hourlyRate, hoursWorked) {
  this->numSupervised = numSupervised;
}

/** @brief The implementation of the Supervisor details func */
void Supervisor::print() {
  Employee::print();
  cout << " Number Supervised: " << numSupervised << endl;
}

/** @brief The paCalculator function being implemented */
double Supervisor::calculatePay() {
  double val = Employee::calculatePay();
  val = val + val * (.01 * numSupervised);
  return val;
}
