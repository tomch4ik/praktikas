#pragma once
#include "Flat.h"

class House
{
    Flat* flat;
    int count1;
    int all_flats;

public:
    House(int all);
    ~House();
    void Flat1(const Flat& f);
    void Print_house();
};

