#include "House.h"
#include <iostream>
#include "Human.h"
#include "Flat.h"
using namespace std;

House::House(int all) : all_flats(all), count1(0)
{
    
}

House::~House()
{
    delete[] flat;
}

void House::Flat1(const Flat& f)
{
    if (count1 < all_flats)
    {
        flat[count1++] = f;
    }
}

void House::Print_house()
{
    cout << "Total number of flats: " << count1 << endl;
}

