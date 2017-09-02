#ifndef NUMERO_H
#define NUMERO_H
#include <string>
using namespace std;

class Numero {
	protected:
		int numero;
		string tipo;
	public:
		Numero();
		Numero(int, string);
		virtual ~Numero();
		int getNumero();
		void setNumero(int);
		string getTipo();
		Numero operator+ (Numero& rnumero);
		Numero operator- (Numero& rnumero);
		Numero operator* (Numero& rnumero);
		virtual void print();
};

#endif
