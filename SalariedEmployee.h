#ifndef SALARIEDEMPLOYEE_H
#define SALARIEDEMPLOYEE_H

#include "Employee.h"
using namespace std;

class SalariedEmployee : public Employee {
private:
    double YearlyPayment;

public:
    SalariedEmployee();
    SalariedEmployee(const std::string& name, int id, double YearlyPayment);
    double calculatePay() const override;
    double getYearlyPayment();
};

#endif

