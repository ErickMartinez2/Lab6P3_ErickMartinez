#include "Numero.h"
#include <iostream>
using namespace std;

Numero::Numero() {

}

Numero::~Numero() {

}

Numero::Numero(int  pnumero, string ptipo) {
	numero = pnumero;
	tipo = ptipo;
}

Numero Numero::operator+ (Numero& rnumero) {
	Numero resp(this -> numero + rnumero.getNumero(), "Resultado");
	return resp;
}

Numero Numero::operator- (Numero& rnumero) {
	Numero resp(this -> numero - rnumero.getNumero() , "Resultado");
	return resp;
}

Numero Numero::operator* (Numero& rnumero) {
	Numero resp(this -> numero * rnumero.getNumero(), "Resultado");
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

string Numero::getTipo() {
	return tipo;
}
