#ifndef BINARIO_H
#define BINARIO_H
#include "Numero.h"
using namespace std;

class Binario: public Numero {
	public:
		Binario(int);
		~Binario();	
		void print();
};

#endif
