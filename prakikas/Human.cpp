#include "Human.h"
#include <iostream>
#include "Flat.h"
#include "House.h"
using namespace std;

Human::Human() 
{
   name = surname = 0;
   age = 0;
}
Human::Human(const char* n, const char* s, int a) 
{
   name = new char[strlen(n) + 1];
   strcpy_s(name, strlen(n) + 1, n);
   surname = new char[strlen(s) + 1];
   strcpy_s(surname, strlen(s) + 1, s);
   age = a;
}	
void Human::Print() 
{
   cout << name << "\t" << surname << "\t" << age << endl;
}
Human::~Human()
{
   delete[] name;
   delete[] surname;
}


