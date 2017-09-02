#ifndef BINARIO_H
#define BINARIO_H
#include "Numero.h"
#include <string>
using namespace std;

class Binario: public Numero {
	public:
		Binario(int, string);
		~Binario();	
		void print();
};

#endif
