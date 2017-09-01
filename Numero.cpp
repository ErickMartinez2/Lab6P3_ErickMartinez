#include "Numero.h"

Numero::Numero() {

}

Numero::Numero(int  pnumero) {
	numero = pnumero;
}

Numero Numero::operator+ (Numero& pnumero) {
	Numero resp(this -> numero + pnumero.getNumero());
	return resp;
}

Numero Numero::operator- (Numero& pnumero) {
	Numero resp(this -> numero - pnumero.getNumero());
	return resp;
}

Numero Numero::operator* (Numero& pnumero) {
	Numero resp(this -> numero * pnumero.getNumero());
	return resp;
}

int Numero::getNumero() {
	return numero;
}

void Numero::setNumero(int pnumero) {
	numero = pnumero;
}
