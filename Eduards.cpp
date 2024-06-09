#include <iostream>
#include "Name.h"
#include "Eduards.h"

using namespace std;

Eduards::Eduards(string n)
{
	name=n;
}

void Eduards::setName(string n)
{
	name=n;
}

void Eduards::Print() const
{
	cout << name << endl;
}


