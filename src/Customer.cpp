#include "Customer.h"

Customer::Customer()
{
    _name = "Default user";
    _electricityUsage = 0;
}

Customer::Customer(string name, int electricityUsage)
{
    _name = name;
    electricityUsage = _electricityUsage;
}
