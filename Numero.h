#ifndef NUMERO_H
#define NUMERO_H
#include <string>
using namespace std;

class Numero {
	private:
		int numero;
	public:
		Numero();
		Numero(int);
		int getNumero();
		void setNumero(int);
		Numero operator+ (Numero& pnumero);
		Numero operator- (Numero& pnumero);
		Numero operator* (Numero& pnumero);
};

#endif
