/**
 * @file Supervisor.h
 * @brief Header file for the Supervisor class
 *
 */
#ifndef SUPERVISOR_H
#define SUPERVISOR_H

#include "Employee.h"

/**
 * @class Supervisor
 * @brief Header file for the Supervisor class
 */
class Supervisor : public Employee {
 private:
  int numSupervised;
 public:

  /** @brief Prnits the supervisor details  */
  void print();

  /** @brief Calculates the total pay for the supervisor  */
  double calculatePay();

  /** @brief Default Constructor  */
  Supervisor();

  /**
   * @brief Parameterized constructor fro the Supervisor class
   * @param numSupervised The number of employees the the supervisor is managing
   */
  Supervisor(int ID, int years, double hourlyRate, float hoursWorked, int numSupervised);
};

#endif //SUPERVISOR_H
