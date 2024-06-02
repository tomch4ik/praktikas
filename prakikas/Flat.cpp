#include "Flat.h"
#include <iostream>
#include "Human.h"
#include "House.h"
using namespace std;

Flat::Flat(int all) : all_people(all), count(0)
{
    inhabitant = new Human[all]; 
}

Flat::~Flat()
{
    delete[] inhabitant;
}

void Flat::people(const Human& h)
{
    if (count < all_people)
    {
        inhabitant[count++] = h;
    }
}

void Flat::Print_flat()
{
    for (int i = 0; i < count; i++)
    {
        inhabitant[i].Print();
    }
}
