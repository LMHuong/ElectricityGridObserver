#include "Household.h"
#include <iostream>
#include <string>

using namespace std;

Household::Household(EVN* e) : Customer()
{
    _evn = e;
}

Household::Household(string name, int electricityUsage, EVN* e) : Customer(name, electricityUsage)
{
    _evn = e;
}

void Household::monthlyBill()
{
    double electricityPrice = _evn->getPrice();
    cout << "Electricity price changed to: " << electricityPrice << endl;
    _electricityUsage = electricityPrice;
    cout << "Household monthly electricity bill updated: " << _electricityUsage << endl;
}
