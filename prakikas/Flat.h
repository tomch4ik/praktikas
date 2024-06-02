#pragma once
#include "Human.h"

class Flat
{
    Human* inhabitant;
    int all_people;
    int count;
public:
    Flat(int all);
    ~Flat();
    void people(const Human& h);
    void Print_flat();
};


