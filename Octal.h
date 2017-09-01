#ifndef OCTAL_H
#define OCTAL_H
#include "Numero.h"
using namespace std;

class Octal: public Numero {
	public:
		Octal(int);
		~Octal();
		void print();
};

#endif
