#include "Employee.h"
#include <string>
using namespace std;



Employee::Employee(const string& name, int id, const string& type)
    : name(name), id(id), type(type) 
{
  // TODO:   done
}

/* IMPLEMENT GETTERS*/


string Employee::getType(){
  return type;
}

string Employee::getName(){
  return name;
}