#include <iostream>
#include <vector>
#include <string>
#include <sstream>
#include <typeinfo>
#include "Numero.h"
#include "Binario.h"
#include "Octal.h"
#include "Hexadecimal.h"
#include <math.h>
using namespace std;

int main() {
	int opcion;
	vector<Numero> numeros;
	do {
		cout << endl;
		cout << "*** Calculadora ***" << endl
			<< "1. Agregar Numero" << endl
			<< "2. Sumar" << endl
			<< "3. Restar" << endl
			<< "4. Multiplicar" << endl
			<< "5. Salir" << endl
			<< "Ingrese su opcion: ";
		cin >> opcion;
		cout << endl;
		switch (opcion) {
			case 1:{
					   string numero;
					   bool numero_correcto = true;
					   cout << "-> Agregar Numero" << endl;
					   do {
						   cout << "Ingrese el numero: ";
						   cin >> numero;
						   int contador = 0;
						   for (int i = 0; i < numero.size(); i++) {
							   if (numero[i] == '0' || numero[i] == '1') {
								   contador++;
							   }
						   }
						   if ((contador == numero.size()) - 1 && (numero[numero.size() - 1] == 'b')) {
							   stringstream nuevo_numero;
							   for (int i = 0; i < numero.size(); i++) {
								   if (i != numero.size() - 1) {
									   nuevo_numero << numero[i];
								   }
							   }
							   string Nuevo_Numero = nuevo_numero.str();
							   Binario num(stoi(Nuevo_Numero), "Binario");
							   numeros.push_back(num);
							   cout << "Binario Agregado!!" << endl;
							   numero_correcto = false;
						   } else {
							   int contador2 = 0;
							   for (int i = 0; i < numero.size(); i++) {
								   if (i > 1) {
									   string palabra_numero;
									   stringstream ss;
									   ss << numero[i];
									   palabra_numero = ss.str();
									   int digito = stoi(palabra_numero);
									   if (digito >= 0 && digito <= 9) {
										   if (digito != 8 && digito != 9) {
											   contador2++;
										   }
									   }
								   }
							   }
							   bool entrar = false;
							   if (numero.size() >= 2) {
								   if ((contador2 == numero.size() - 2) && (numero[0] == '0') && (numero[1] == 'c')) {
									   stringstream nuevo_numero2;
									   for (int i = 0; i < numero.size(); i++) {
										   if (i != 0 && i != 1) {
											   nuevo_numero2 << numero[i];
										   }
									   }
									   string Nuevo_Numero2 = nuevo_numero2.str();
									   Octal num2(stoi(Nuevo_Numero2), "Octal");
									   numeros.push_back(num2);
									   cout << "Octal Agregado!!" << endl;
									   numero_correcto = false;
									   entrar = true;
								   }

							   } 
							   if (!entrar) {
								   int contador3 = 0;
								   for (int i = 0; i < numero.size(); i++) {
									   if (i > 1) {
										   string palabra_numero2;
										   stringstream ss2;
										   ss2 << numero[i];
										   palabra_numero2 = ss2.str();
										   int digito2 = stoi(palabra_numero2);
										   if (digito2 >= 0 && digito2 <= 9) {
											   if (digito2 != 8 && digito2 != 9) {
												   contador3++;
											   }
										   }
									   }
								   }
								   bool entrar2 = false;
								   if (numero.size() >= 2) {
									   if ((contador3 == numero.size() - 2) && (numero[0] == '0') && (numero[1] == 'x')) {
										   stringstream nuevo_numero3;
										   for (int i = 0; i < numero.size(); i++) {
											   if (i != 0 && i != 1) {
												   nuevo_numero3 << numero[i];
											   }
										   }
										   string Nuevo_Numero3 = nuevo_numero3.str();
										   Hexadecimal num3(stoi(Nuevo_Numero3), "Hexadecimal");
										   numeros.push_back(num3);
										   cout << stoi(Nuevo_Numero3) << endl;
										   cout << "Hexadecimal Agregado!!" << endl;
										   numero_correcto = false;
										   entrar2 = true;
									   }
								   } 
								   if (!entrar2) {
									   int contador4 = 0;
									   for (int i = 0; i < numero.size(); i++) {
										   string palabra_numero3;
										   stringstream ss3;
										   ss3 << numero[i];
										   palabra_numero3 = ss3.str();
										   int digito3 = stoi(palabra_numero3);
										   if (digito3 >= 0 && digito3 <= 9) {
											   contador4++;
										   }
									   }
									   if (contador4 == numero.size()) {
										   Numero num4(stoi(numero), "Decimal");
										   numeros.push_back(num4);
										   cout << "Decimal Agregado!!" << endl;
										   numero_correcto = false;
									   }
								   }
							   }		
						   }
						   if (numero_correcto) {
							   cout << "Numero Incorrecto" << endl;
						   }
					   } while (numero_correcto);
				   }break;
			case 2:{
					   cout << "-> Sumar" << endl;
					   for (int i = 0; i < numeros.size(); i++) {
						   if(numeros.at(i).getTipo() == "Binario"){
							   cout << i << ". Binario: " << numeros.at(i).getNumero() << endl;
						   } else if (numeros.at(i).getTipo() == "Hexadecimal") {
							   cout << i << ". Hexadecimal: " << numeros.at(i).getNumero() << endl;
						   } else if (numeros.at(i).getTipo() == "Octal") {
							   cout << i << ". Octal: " << numeros.at(i).getNumero() << endl;
						   } else {
							   cout << i << ". Decimal: " << numeros.at(i).getNumero() << endl;
						   }
					   }
					   cout << "Ingrese la posicion del primer numero: ";
					   int numero1;
					   cin >> numero1;
					   if(numeros.at(numero1).getTipo() == "Binario"){
						   stringstream nuevo_numero;
						   nuevo_numero << numeros.at(numero1).getNumero();
						   string NuevoNumero = nuevo_numero.str();
						   int size = NuevoNumero.size() - 1;
						   int acumulador = 0;
						   for (int i = 0; i < NuevoNumero.size(); i++) {
							   if (NuevoNumero[i] == '0') {
								   acumulador += 0 * (pow(2, size));
							   } else {
								   acumulador += 1 * (pow(2, size));
							   }
							   size--;
						   }
						   numeros.at(numero1).setNumero(acumulador);
					   } else if (numeros.at(numero1).getTipo() == "Hexadecimal") {
						   cout << "No se puede con Hexadecimal :(" << endl;
					   } else if (numeros.at(numero1).getTipo() == "Octal") {
						   stringstream nuevo_numero2;
						   nuevo_numero2 << numeros.at(numero1).getNumero();
						   string NuevoNumero2 = nuevo_numero2.str();
						   cout << NuevoNumero2 << endl;
						   int acumulador2 = 0;
						   int size2 = NuevoNumero2.size() - 1;
						   for (int i = 0; i < NuevoNumero2.size(); i++) {
							   stringstream nuevo_numero3;
							   nuevo_numero3 << NuevoNumero2.at(i);
							   string NuevoNumero3 = nuevo_numero3.str();
							   acumulador2 += stoi(NuevoNumero3) * (pow(8, size2));
							   size2 --;
						   }
						   numeros.at(numero1).setNumero(acumulador2);
					   } 
					   cout << "Ingrese la posicion del segundo numero: ";
					   int numero2;
					   cin >> numero2;
						if(numeros.at(numero2).getTipo() == "Binario"){
						   stringstream nuevo_numero;
						   nuevo_numero << numeros.at(numero2).getNumero();
						   string NuevoNumero = nuevo_numero.str();
						   int size = NuevoNumero.size() - 1;
						   int acumulador = 0;
						   for (int i = 0; i < NuevoNumero.size(); i++) {
							   if (NuevoNumero[i] == '0') {
								   acumulador += 0 * (pow(2, size));
							   } else {
								   acumulador += 1 * (pow(2, size));
							   }
							   size--;
						   }
						   numeros.at(numero2).setNumero(acumulador);
					   } else if (numeros.at(numero2).getTipo() == "Hexadecimal") {
						   cout << "No se puede con Hexadecimal :(" << endl;
					   } else if (numeros.at(numero2).getTipo() == "Octal") {
						   stringstream nuevo_numero2;
						   nuevo_numero2 << numeros.at(numero2).getNumero();
						   string NuevoNumero2 = nuevo_numero2.str();
						   cout << NuevoNumero2 << endl;
						   int acumulador2 = 0;
						   int size2 = NuevoNumero2.size() - 1;
						   for (int i = 0; i < NuevoNumero2.size(); i++) {
							   stringstream nuevo_numero3;
							   nuevo_numero3 << NuevoNumero2.at(i);
							   string NuevoNumero3 = nuevo_numero3.str();
							   acumulador2 += stoi(NuevoNumero3) * (pow(8, size2));
							   size2 --;
						   }
						   numeros.at(numero2).setNumero(acumulador2);
					   } 

					   Numero nuevo_num = numeros.at(numero1) + numeros.at(numero2);
					   cout << "Suma Final: " << nuevo_num.getNumero() << endl;
					  
				   }break;
			case 3:{
					cout << "-> Restar" << endl;
					   for (int i = 0; i < numeros.size(); i++) {
						   if(numeros.at(i).getTipo() == "Binario"){
							   cout << i << ". Binario: " << numeros.at(i).getNumero() << endl;
						   } else if (numeros.at(i).getTipo() == "Hexadecimal") {
							   cout << i << ". Hexadecimal: " << numeros.at(i).getNumero() << endl;
						   } else if (numeros.at(i).getTipo() == "Octal") {
							   cout << i << ". Octal: " << numeros.at(i).getNumero() << endl;
						   } else {
							   cout << i << ". Decimal: " << numeros.at(i).getNumero() << endl;
						   }
					   }
					   cout << "Ingrese la posicion del primer numero: ";
					   int numero1;
					   cin >> numero1;
					   if(numeros.at(numero1).getTipo() == "Binario"){
						   stringstream nuevo_numero;
						   nuevo_numero << numeros.at(numero1).getNumero();
						   string NuevoNumero = nuevo_numero.str();
						   int size = NuevoNumero.size() - 1;
						   int acumulador = 0;
						   for (int i = 0; i < NuevoNumero.size(); i++) {
							   if (NuevoNumero[i] == '0') {
								   acumulador += 0 * (pow(2, size));
							   } else {
								   acumulador += 1 * (pow(2, size));
							   }
							   size--;
						   }
						   numeros.at(numero1).setNumero(acumulador);
					   } else if (numeros.at(numero1).getTipo() == "Hexadecimal") {
						   cout << "No se puede con Hexadecimal :(" << endl;
					   } else if (numeros.at(numero1).getTipo() == "Octal") {
						   stringstream nuevo_numero2;
						   nuevo_numero2 << numeros.at(numero1).getNumero();
						   string NuevoNumero2 = nuevo_numero2.str();
						   cout << NuevoNumero2 << endl;
						   int acumulador2 = 0;
						   int size2 = NuevoNumero2.size() - 1;
						   for (int i = 0; i < NuevoNumero2.size(); i++) {
							   stringstream nuevo_numero3;
							   nuevo_numero3 << NuevoNumero2.at(i);
							   string NuevoNumero3 = nuevo_numero3.str();
							   acumulador2 += stoi(NuevoNumero3) * (pow(8, size2));
							   size2 --;
						   }
						   numeros.at(numero1).setNumero(acumulador2);
					   } 
					   cout << "Ingrese la posicion del segundo numero: ";
					   int numero2;
					   cin >> numero2;
						if(numeros.at(numero2).getTipo() == "Binario"){
						   stringstream nuevo_numero;
						   nuevo_numero << numeros.at(numero2).getNumero();
						   string NuevoNumero = nuevo_numero.str();
						   int size = NuevoNumero.size() - 1;
						   int acumulador = 0;
						   for (int i = 0; i < NuevoNumero.size(); i++) {
							   if (NuevoNumero[i] == '0') {
								   acumulador += 0 * (pow(2, size));
							   } else {
								   acumulador += 1 * (pow(2, size));
							   }
							   size--;
						   }
						   numeros.at(numero2).setNumero(acumulador);
					   } else if (numeros.at(numero2).getTipo() == "Hexadecimal") {
						   cout << "No se puede con Hexadecimal :(" << endl;
					   } else if (numeros.at(numero2).getTipo() == "Octal") {
						   stringstream nuevo_numero2;
						   nuevo_numero2 << numeros.at(numero2).getNumero();
						   string NuevoNumero2 = nuevo_numero2.str();
						   cout << NuevoNumero2 << endl;
						   int acumulador2 = 0;
						   int size2 = NuevoNumero2.size() - 1;
						   for (int i = 0; i < NuevoNumero2.size(); i++) {
							   stringstream nuevo_numero3;
							   nuevo_numero3 << NuevoNumero2.at(i);
							   string NuevoNumero3 = nuevo_numero3.str();
							   acumulador2 += stoi(NuevoNumero3) * (pow(8, size2));
							   size2 --;
						   }
						   numeros.at(numero2).setNumero(acumulador2);
					   } 

					   Numero nuevo_num = numeros.at(numero1) - numeros.at(numero2);
					   cout << "Resta Final: " << nuevo_num.getNumero() << endl;

				   }break;
			case 4:{
						cout << "-> Multiplicar" << endl;
					   for (int i = 0; i < numeros.size(); i++) {
						   if(numeros.at(i).getTipo() == "Binario"){
							   cout << i << ". Binario: " << numeros.at(i).getNumero() << endl;
						   } else if (numeros.at(i).getTipo() == "Hexadecimal") {
							   cout << i << ". Hexadecimal: " << numeros.at(i).getNumero() << endl;
						   } else if (numeros.at(i).getTipo() == "Octal") {
							   cout << i << ". Octal: " << numeros.at(i).getNumero() << endl;
						   } else {
							   cout << i << ". Decimal: " << numeros.at(i).getNumero() << endl;
						   }
					   }
					   cout << "Ingrese la posicion del primer numero: ";
					   int numero1;
					   cin >> numero1;
					   if(numeros.at(numero1).getTipo() == "Binario"){
						   stringstream nuevo_numero;
						   nuevo_numero << numeros.at(numero1).getNumero();
						   string NuevoNumero = nuevo_numero.str();
						   int size = NuevoNumero.size() - 1;
						   int acumulador = 0;
						   for (int i = 0; i < NuevoNumero.size(); i++) {
							   if (NuevoNumero[i] == '0') {
								   acumulador += 0 * (pow(2, size));
							   } else {
								   acumulador += 1 * (pow(2, size));
							   }
							   size--;
						   }
						   numeros.at(numero1).setNumero(acumulador);
					   } else if (numeros.at(numero1).getTipo() == "Hexadecimal") {
						   cout << "No se puede con Hexadecimal :(" << endl;
					   } else if (numeros.at(numero1).getTipo() == "Octal") {
						   stringstream nuevo_numero2;
						   nuevo_numero2 << numeros.at(numero1).getNumero();
						   string NuevoNumero2 = nuevo_numero2.str();
						   cout << NuevoNumero2 << endl;
						   int acumulador2 = 0;
						   int size2 = NuevoNumero2.size() - 1;
						   for (int i = 0; i < NuevoNumero2.size(); i++) {
							   stringstream nuevo_numero3;
							   nuevo_numero3 << NuevoNumero2.at(i);
							   string NuevoNumero3 = nuevo_numero3.str();
							   acumulador2 += stoi(NuevoNumero3) * (pow(8, size2));
							   size2 --;
						   }
						   numeros.at(numero1).setNumero(acumulador2);
					   } 
					   cout << "Ingrese la posicion del segundo numero: ";
					   int numero2;
					   cin >> numero2;
						if(numeros.at(numero2).getTipo() == "Binario"){
						   stringstream nuevo_numero;
						   nuevo_numero << numeros.at(numero2).getNumero();
						   string NuevoNumero = nuevo_numero.str();
						   int size = NuevoNumero.size() - 1;
						   int acumulador = 0;
						   for (int i = 0; i < NuevoNumero.size(); i++) {
							   if (NuevoNumero[i] == '0') {
								   acumulador += 0 * (pow(2, size));
							   } else {
								   acumulador += 1 * (pow(2, size));
							   }
							   size--;
						   }
						   numeros.at(numero2).setNumero(acumulador);
					   } else if (numeros.at(numero2).getTipo() == "Hexadecimal") {
						   cout << "No se puede con Hexadecimal :(" << endl;
					   } else if (numeros.at(numero2).getTipo() == "Octal") {
						   stringstream nuevo_numero2;
						   nuevo_numero2 << numeros.at(numero2).getNumero();
						   string NuevoNumero2 = nuevo_numero2.str();
						   cout << NuevoNumero2 << endl;
						   int acumulador2 = 0;
						   int size2 = NuevoNumero2.size() - 1;
						   for (int i = 0; i < NuevoNumero2.size(); i++) {
							   stringstream nuevo_numero3;
							   nuevo_numero3 << NuevoNumero2.at(i);
							   string NuevoNumero3 = nuevo_numero3.str();
							   acumulador2 += stoi(NuevoNumero3) * (pow(8, size2));
							   size2 --;
						   }
						   numeros.at(numero2).setNumero(acumulador2);
					   } 

					   Numero nuevo_num = numeros.at(numero1) * numeros.at(numero2);
					   cout << "Multiplicacion Final: " << nuevo_num.getNumero() << endl;
				   }break;
			case 5:{
					   cout << "Hasta Pronto!!" << endl;
				   }break;

		}
	} while (opcion != 5);	
	return 0;
}
