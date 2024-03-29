// Ahorro.cpp: define el punto de entrada de la aplicación de consola.
//

#include "stdafx.h"
#include <iostream>
#include <conio.h>
#include <string>
using namespace std;
int cod_cliente = 0;
float saldoAhorro = 0.0, saldoMonetario = 0.0;
string nombre = "";
void menu();
void registro();
void consulta();
void tipoCuenta();
void subOperacion(int tipo);
void deposito(int tipo);
void retiro(int tipo);
void traslado(int tipo);
int c = 0;


void menu() {
	int op = 0;
	cout << "Elija Una opcion" << endl;
	cout << "1.) Registro:" << endl;
	cout << "2.) Consulta:" << endl;
	cin >> op;
	while (op < 1 or op > 2) {
		system("cls");
		cout << "Opcion no valida: " << endl;
		cout << "Elija Una opcion" << endl;
		cout << "1.) Registro:" << endl;
		cout << "2.) Consulta:" << endl;
		cin >> op;
	}
	if (op == 1) {
		registro();
	}
	else if (op == 2) {
		consulta();
	}
	else {
		cout << "Opcion No Valida: " << endl;
	}
}
void registro() {
	cout << "Ingrese los siguientes datos: " << endl;
	cout << "Codigo del Cliente: " << endl;
	cin >> cod_cliente;
	cout << "Ingrese Nombre: " << endl;
	cin >> nombre;
	tipoCuenta();

}
void consulta() {
	cout << "El saldo en ahorros es: " << saldoAhorro << endl;
	cout << "El saldo en Monetario es: " << saldoMonetario << endl;
	system("pause()");
	menu();
}
void tipoCuenta() {
	int tipoCuenta = 0;
	int tipo = 0;
	cout << "Seleccione el Tipo de cuenta: " << endl;
	cout << "1.)Ahorro" << endl;
	cout << "2.)Monetaria" << endl;
	cin >> tipoCuenta;
	while (tipoCuenta < 1 or tipoCuenta > 2) {
		system("cls");
		cout << "Opcion no valida: " << endl;
		cout << "Seleccione el Tipo de cuenta: " << endl;
		cout << "1.)Ahorro" << endl;
		cout << "2.)Monetaria" << endl;
		cin >> tipoCuenta;
	}
	if (tipoCuenta==1) {
		tipo = 1;
		subOperacion(tipo);
	}
	else if (tipoCuenta == 2) {
		tipo = 2;
		subOperacion(tipo);
	}
}
void subOperacion(int tipo) {
	int tipoOp = 0;
	cout << "Seleccione el tipo de operacion: " << endl;
	cout << "1.) Deposito: " << endl;
	cout << "2.) Retiro: " << endl;
	cout << "3.) Traslado:" << endl;
	cin >> tipoOp;
	while (tipoOp < 1 or tipoOp>3) {
		system("cls");
		cout << "Opcion no valida: " << endl;
		cout << "Seleccione el tipo de operacion: " << endl;
		cout << "1.) Deposito: " << endl;
		cout << "2.) Retiro: " << endl;
		cout << "3.) Traslado:" << endl;
		cin >> tipoOp;
	}
	if (tipoOp == 1) {
		deposito(tipo);
	}
	else if (tipoOp == 2) {
		retiro(tipo);
	}
	else if (tipoOp == 3) {
		traslado(tipo);
	}
	else {
		cout << "Operación no Valida: " << endl;
	}
}
void deposito(int tipo) {
	float monto = 0.0;
	cout << "Cual es el monto de deposito: " << endl;
	cin >> monto;
	if (tipo == 1) {
		//Deposito en la cuenta de ahorro.
		saldoAhorro = saldoAhorro + monto;
	}
	else if (tipo == 2) {
		//Deposito en la cuenta Monetaria: 
		saldoMonetario = saldoMonetario + monto;
	}
	cout << "Transacción completa: " << endl;
	system("PAUSE()");
	system("cls");
	menu();
}
void retiro(int tipo) {
	float monto = 0.0;
	cout << "Cual es el monto del Retiro:" << endl;
	cin >> monto;
	if (tipo == 1) {
		//Retiro de la cuenta de ahorro.
		if (saldoAhorro != 0) {
			if (monto <= saldoAhorro) {
				saldoAhorro = saldoAhorro - monto;
			}
			else {
				cout << "El monto de retiro es mayor al saldo:" << endl;
			}
		}
		else {
			cout << "NO puede retirar ya que no cuenta con fondos suficientes." << endl;
		}
	}
	else if (tipo == 2) {
		//Retiro de la cuenta Monetaria:
		if (saldoMonetario != 0) {
			if (monto <= saldoMonetario) {
				saldoMonetario = saldoMonetario - monto;
			}
			else {
				cout << "El monto de retiro es mayor al saldo:" << endl;
			}
		}
		else {
			cout << "No puede retirar ya que no cuenta con fondos suficientes." << endl;
		}
	}
	cout << "Transacción completa: " << endl;
	system("pause()");
	system("cls");
	menu();
}
void traslado(int tipo) {
	int tipoTraslado = 0;
	float monto = 0;
	cout << "Trasladar dinero: " << endl;
	cout << "1.)De Ahorro a Monetario" << endl;
	cout << "2.)De Monetario a ahorro:" << endl;
	cin >> tipoTraslado;
	while (tipoTraslado < 1 or tipoTraslado > 2) {
		system("cls");
		cout << "Operacion Valida: " << endl;
		cout << "Trasladar dinero: " << endl;
		cout << "1.)De Ahorro a Monetario" << endl;
		cout << "2.)De Monetario a ahorro:" << endl;
		cin >> tipoTraslado;
	}
	if (tipoTraslado == 1) {
		cout <<endl<< "1.)De Ahorro a Monetario" << endl;
		cout << "Cantidad a trasladar:" << endl;
		cin >> monto;
		while (monto > saldoAhorro) {
			system("cls");
			cout << "Monto a trasladar es mayor a el saldo en ahorros: " << endl;
			cout << "Cantidad a trasladar:" << endl;
			cin >> monto;
		}
		saldoAhorro = saldoAhorro - monto;
		saldoMonetario = saldoMonetario + monto;
	}
	else if (tipoTraslado == 2) {
		cout << endl << "2.) De Monetario a Ahorro: " << endl;
		cout << "Cantidad a trasladar:" << endl;
		cin >> monto;
		while (monto > saldoMonetario) {
			system("cls");
			cout << "Monto a trasladar es mayor a el saldo en Monetarios: " << endl;
			cout << "Cantidad a trasladar:" << endl;
			cin >> monto;
		}
		saldoMonetario = saldoMonetario - monto;
		saldoAhorro = saldoAhorro + monto;
	}
	cout << "Transacion completa: " << endl;
	system("PAUSE()");
	system("cls");
	menu();
}

int main()
{
	menu();
	system("pause()");
    return 0;
}