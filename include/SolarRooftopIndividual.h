#ifndef SOLARROOFTOPINDIVIDUAL_H
#define SOLARROOFTOPINDIVIDUAL_H

#include <Customer.h>
#include <string>

#include "EVN.h"

using namespace std;


class SolarRooftopIndividual : public Customer
{
    public:
        SolarRooftopIndividual(EVN* e);
        SolarRooftopIndividual(string name, int electricityUsage, EVN *e);
        void monthlyBill();
        void setElectricSentBack(double electricSentBack);

    private:
        EVN* _evn;
        double _amountOfElectricitySentBack;
};

#endif // SOLARROOFTOPINDIVIDUAL_H
