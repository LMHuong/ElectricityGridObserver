#ifndef EVN_H
#define EVN_H
#include "Customer.h"
#include <vector>

using namespace std;

class EVN
{
    public:
        EVN();
        ~EVN();
        void addCustomer(Customer* c);
        void changeElectricityPrice(double newPrice);
        void notify();
        double getPrice();

    private:
        vector <Customer*> _listCustomer;
        double _electricityPrice;

};

#endif // EVN_H
