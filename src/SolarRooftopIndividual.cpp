#include "SolarRooftopIndividual.h"
#include <string>
#include <iostream>

using namespace std;

SolarRooftopIndividual::SolarRooftopIndividual(EVN* e) : Customer()
{
    _evn = e;
}

SolarRooftopIndividual::SolarRooftopIndividual(string name, int electricityUsage, EVN* e) : Customer(name, electricityUsage)
{
    _evn = e;
}

void SolarRooftopIndividual::monthlyBill()
{
    double electricityPrice = _evn->getPrice();
    _electricityUsage = electricityPrice - _amountOfElectricitySentBack;
    cout << "Solar Rooftop Individual monthly electricity bill updated: " << _electricityUsage << endl;
}

void SolarRooftopIndividual::setElectricSentBack(double electricSentBack)
{
    _amountOfElectricitySentBack = electricSentBack;
}
