#include "Binario.h"
#include <iostream>
using namespace std;

Binario::Binario(int pnumero, string ptipo):Numero(pnumero, ptipo) {
	
}

Binario::~Binario() {

}

void Binario::print() {
	cout << "Esto es un binario!!" << endl;
}
