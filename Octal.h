#ifndef OCTAL_H
#define OCTAL_H
#include "Numero.h"
#include <string>
using namespace std;

class Octal: public Numero {
	public:
		Octal(int, string);
		~Octal();
		void print();
};

#endif
