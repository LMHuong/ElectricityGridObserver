#include <iostream>
#include "EVN.h"
#include "Customer.h"
#include "Household.h"
#include "Business.h"
#include "SolarRooftopIndividual.h"

using namespace std;

int main()
{
    EVN* evn = new EVN();

    Household* h = new Household("Huong", 0, evn);
    Business* b = new Business("FPT", 0, evn);
    SolarRooftopIndividual* s = new SolarRooftopIndividual("Finland", 0, evn);

    evn->addCustomer(h);
    evn->addCustomer(b);
    evn->addCustomer(s);

    b->setDiscountRate(5);
    s->setElectricSentBack(120);

    evn->changeElectricityPrice(560);

    cout << "---------------" << endl;

    evn->changeElectricityPrice(400);
    return 0;
}
