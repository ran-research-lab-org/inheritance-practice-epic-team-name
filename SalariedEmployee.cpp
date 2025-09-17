#include "SalariedEmployee.h"
using namespace std;

SalariedEmployee::SalariedEmployee(const std::string& name, int id, double YearlyPayment)
: Employee(name, id, "Salaried"), YearlyPayment(YearlyPayment){
    // TODO: 
}
/*TODO: calculate Payment  done*/

/* IMPLEMENT GETTERS*/
double SalariedEmployee::getYearlyPayment(){
    return YearlyPayment;
}
double SalariedEmployee::calculatePay()const{
    double biweeklypayment = YearlyPayment/26;
    return biweeklypayment;
}