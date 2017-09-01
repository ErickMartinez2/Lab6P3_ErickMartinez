#include "Numero.h"
#include <iostream>
using namespace std;

Numero::Numero() {

}

Numero::~Numero() {

}

Numero::Numero(int  pnumero) {
	numero = pnumero;
}

Numero Numero::operator+ (int pnumero) {
	Numero resp(this -> numero + pnumero);
	return resp;
}

Numero Numero::operator- (int pnumero) {
	Numero resp(this -> numero - pnumero);
	return resp;
}

Numero Numero::operator* (int pnumero) {
	Numero resp(this -> numero * pnumero);
	return resp;
}

int Numero::getNumero() {
	return numero;
}

void Numero::setNumero(int pnumero) {
	numero = pnumero;
}

void Numero::print(){
	cout << "Soy un Numero!!" << endl;
}
