/**
 * @file Employee.h
 * @brief Header file for Employee class
 *
 */
#ifndef EMPLOYEE_H
#define EMPLOYEE_H

/**
 * @class Employee
 * @brief Base class for regular employee
 */
class Employee {
 private:
  int ID; //employee ID
  int years;
  
 protected:
  double hourlyRate;
  float hoursWorked;

 public:

  /**
   * @brief Prnts the employee informaton
   *
   */
  virtual void print();

  /**
   * @brief Calculates the pay (total) based ont he hours and the rate
   * @return The pay as a double
   */
  virtual double calculatePay();

  /**
   *@brief Looks at the employees years of service in increments
   *
   */
  void anniversary();

  /**
   * @brief The consturctor for a new Employee
   */
  Employee();

  /**
   *
   * @brief Parametized constructor
   * @param ID Employee Identification Number
   * @param years Number of years employed
   * @param hourlyRate Pay rate per hour
   * @param hoursWorked bumber of hours worked
   *
   */
  Employee(int ID, int years, double hourlyRate, float hoursWorked);
};

#endif //EMPLOYEE_H
