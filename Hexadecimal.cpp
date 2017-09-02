#include "Hexadecimal.h"
#include <iostream>
using namespace std;

Hexadecimal::Hexadecimal(int pnumero, string ptipo):Numero(pnumero, ptipo) {
	
}

Hexadecimal::~Hexadecimal() {

}

void Hexadecimal::print() {
	cout << "Esto es un hexadecimal!!" << endl;
}
