#include "Binario.h"
#include <iostream>
using namespace std;

Binario::Binario(int pnumero):Numero(pnumero) {
	
}

Binario::~Binario() {

}

void Binario::print() {
	cout << "Esto es un binario!!" << endl;
}
