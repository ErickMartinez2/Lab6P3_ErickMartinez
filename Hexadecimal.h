#ifndef HEXADECIMAL_H
#define HEXADECIMAL_H
#include "Numero.h"
#include <string>
using namespace std;

class Hexadecimal: public Numero {
	public:
		Hexadecimal(int, string);
		~Hexadecimal();
		void print();
};

#endif
