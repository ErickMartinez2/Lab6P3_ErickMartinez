#include "Octal.h"
#include <iostream>
using namespace std;

Octal::Octal(int pnumero):Numero(pnumero) {
	
}

Octal::~Octal() {

}

void Octal::print() {
	cout << "Esto en un octal!!" << endl;
}
