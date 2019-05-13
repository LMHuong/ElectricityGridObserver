#include "EVN.h"

EVN::EVN()
{
    _electricityPrice = 500;
}

EVN::~EVN()
{
    for (int i = 0; i < _listCustomer.size(); i++)
    {
        delete _listCustomer[i];
    }
}

void EVN::addCustomer(Customer* c)
{
    _listCustomer.push_back(c);
}

void EVN::changeElectricityPrice(double newPrice)
{
    _electricityPrice = newPrice;
    notify();
}

void EVN::notify()
{
    for (int i = 0; i < _listCustomer.size(); i++)
    {
        _listCustomer[i]->monthlyBill();
    }
}

double EVN::getPrice()
{
    return _electricityPrice;
}
