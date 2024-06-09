#include <iostream>
#include "Name.h"
using namespace std;

class Eduards: public Name
{
	public:
		Eduards(string = "DefaultName");
		virtual void setName(string);
		void Print() const;
		
	private:
		string name;
};
