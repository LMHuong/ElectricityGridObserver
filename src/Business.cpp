#include "Business.h"
#include <string>
#include <iostream>

using namespace std;

Business::Business(EVN* e) : Customer()
{
    _evn = e;
}

Business::Business(string name, int electricityUsage, EVN* e) : Customer(name, electricityUsage)
{
    _evn = e;
}

void Business::monthlyBill()
{
    double electricityPrice = _evn->getPrice();
    _electricityUsage = electricityPrice - (electricityPrice * _discountRate / 100);
    cout << "Business monthly electricity bill updated: " << _electricityUsage << endl;
}

void Business::setDiscountRate(double discountRate)
{
    _discountRate = discountRate;
}

