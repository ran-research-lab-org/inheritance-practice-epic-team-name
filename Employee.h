// Parent Class Employee
#ifndef EMPLOYEE_H
#define EMPLOYEE_H

#include <string>
using namespace std;

class Employee {
// Attributes
protected:
    std::string name;
    int id;
    std::string type; // "Hourly" or "Salaried"

// Methods
public:
	// TODO: Constructor done
    Employee();
    Employee(string name, int id, string type, double payPerHour,
         double workedHours, double yearlyPayment);

    virtual ~Employee() {};

    // Virtual function to calculate payment
    virtual double calculatePay() const = 0;

    // TODO: Getters    done
    string getType();
    string getName();

};

#endif

