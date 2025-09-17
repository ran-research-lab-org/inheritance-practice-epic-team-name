#include "HourlyEmployee.h"

HourlyEmployee::HourlyEmployee(const string& name, int id, double payPerHour, double workedHours)
    : Employee(name, id, "Hourly"), payPerHour(payPerHour), workedHours(workedHours) 
{
    // TODO: 
}
/*TODO: calculate Payment DONE*/

double HourlyEmployee::getPayPerHour(){
    return payPerHour;
}

double HourlyEmployee::getWorkedHours(){
    return workedHours;
}

double HourlyEmployee::calculatePay()const{
    double payment = workedHours * payPerHour;
    return payment;// change to bi
}