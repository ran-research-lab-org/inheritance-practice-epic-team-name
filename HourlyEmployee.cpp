#include "HourlyEmployee.h"

HourlyEmployee::HourlyEmployee(const std::string& name, int id, 
                                double payPerHour, double workedHours)
{
    // TODO: 
}
/*TODO: calculate Payment DONE*/

double HourlyEmployee::getPayPerHour(){
    return PayPerHour;
}

double HourlyEmployee::getWorkedHours(){
    return workedHours;
}

double HourlyEmployee::calculatePay(){
    double payment = workedHours * payPerHour;
    return payment;// change to bi
}