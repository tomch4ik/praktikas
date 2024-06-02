#include <iostream>
#include "Human.h"
#include "Flat.h"
#include "House.h"
using namespace std;

int main()
{
    Human a("Mike", "Lookman", 30);
    a.Print();
    Human b("Karl", "Dzaka", 35);
    b.Print();
    Human c("Daniel", "Carter", 25);
    c.Print();

    Flat flat1(3);
    flat1.people(a);
    flat1.people(b);
    flat1.people(c);
    cout << "People in first flat:" << endl;
    flat1.Print_flat();

    House house1(30);
    cout << "Apartment occupancy: ";
    house1.Print_house();
    cout << endl;

   
}

