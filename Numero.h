#ifndef NUMERO_H
#define NUMERO_H
#include <string>
using namespace std;

class Numero {
	protected:
		int numero;
	public:
		Numero();
		Numero(int);
		virtual ~Numero();
		int getNumero();
		void setNumero(int);
		Numero operator+ (int pnumero);
		Numero operator- (int pnumero);
		Numero operator* (int pnumero);
		virtual void print();
};

#endif
