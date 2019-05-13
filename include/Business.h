#ifndef BUSINESS_H
#define BUSINESS_H
#include <string>
#include "EVN.h"

#include <Customer.h>


class Business : public Customer
{
    public:
        Business(EVN* e);
        Business(string name, int electricityUsage, EVN *e);
        void monthlyBill();
        void setDiscountRate(double discountRate);

    private:
        EVN* _evn;
        double _discountRate;
};

#endif // BUSINESS_H
