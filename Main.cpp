#include <iostream>
#include <vector>
#include <string>
#include <sstream>
#include "Numero.h"
#include "Binario.h"
#include "Octal.h"
#include "Hexadecimal.h"
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
							   Binario num(stoi(numero));
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
									   Octal num2(stoi(numero));
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
										   Hexadecimal num3(stoi(numero));
										   numeros.push_back(num3);
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
								   }
							   }		
						   }
						   if (numero_correcto) {
							   cout << "Numero Incorrecto" << endl;
						   }
					   } while (numero_correcto);
				   }break;
			case 2:{

				   }break;
			case 3:{

				   }break;
			case 4:{

				   }break;
			case 5:{
					   cout << "Hasta Pronto!!" << endl;
				   }break;

		}
	} while (opcion != 5);	
	return 0;
}
