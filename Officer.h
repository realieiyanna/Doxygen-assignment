/**
 * @file Officer.h
 * @brief Header file for the officer class
 */
#ifndef OFFICER_H
#define OFFICER_H

#include "Employee.h"

/**
 * @Class Officer
 * @brief Represents the officer class that is inhereted from the employee class
 */
class Officer : public Employee {
 private:
  double evilness;
 public:
  /**
   * @brief Prnts the specific details for Officer
   */
  void print();
  
  /** @brief Calculates the officers pay including the bonuses*/
  double calculatePay();

  /** @brief The default Constructor  */
  Officer();

  /**
   * @brief Parametrized the Officer Constructor
   * @param evilness Calculates the level of evilness in an officer
   */
  Officer(int ID, int years, double hourlyRate, float hoursWorked, double evilness);
};

#endif //OFFICER_H
