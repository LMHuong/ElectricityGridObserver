#ifndef HOUSEHOLD_H
#define HOUSEHOLD_H
#include <string>
#include "EVN.h"

#include <Customer.h>


class Household : public Customer
{
    public:
        Household(EVN *e);
        Household(string name, int electricityUsage, EVN *e);
        void monthlyBill();

    private:
        EVN* _evn;
};

#endif // HOUSEHOLD_H
