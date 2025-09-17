#include "SalariedEmployee.h"
using namespace std;

SalariedEmployee::SalariedEmployee(const std::string& name, int id, double YearlyPayment)
: {
    // TODO: 
}
/*TODO: calculate Payment  done*/

/* IMPLEMENT GETTERS*/
double SalariedEmployee::getYearlyPayment(){
    return YearlyPayment;
}
double SalariedEmployee::calculatePay(){
    double biweeklypayment = YearlyPayment/26;
    return biweeklypayment;
}