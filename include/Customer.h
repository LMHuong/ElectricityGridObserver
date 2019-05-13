#ifndef CUSTOMER_H
#define CUSTOMER_H
#include <string>

using namespace std;


class Customer
{
    public:
        Customer();
        Customer(string name, int electricityUsage);
        virtual void monthlyBill() = 0;

    protected:
        string _name;
        int _electricityUsage;
};

#endif // CUSTOMER_H
