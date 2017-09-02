#include "Octal.h"
#include <iostream>
using namespace std;

Octal::Octal(int pnumero, string ptipo):Numero(pnumero,ptipo) {
	
}

Octal::~Octal() {

}

void Octal::print() {
	cout << "Esto en un octal!!" << endl;
}
