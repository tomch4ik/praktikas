#pragma once
class Human 
{
    char* name;
	char* surname;
	int age;
public:
	Human();
	Human(const char* n, const char* s, int a);
	~Human();
	void Print();
};

