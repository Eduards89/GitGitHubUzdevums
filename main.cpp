#include <iostream>
#include "Name.h"
#include "Eduards.h"
using namespace std;

int main()
{
	const int array_size = 1;
	Name *Names[array_size];
	
	Eduards e;
	e.setName("Eduards");

	Names[1] = &e;
	
	for (int i=0; i<array_size; i++)
		Names[i]->Print();
	
	return 0;
}
