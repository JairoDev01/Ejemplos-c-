// ventas.cpp: define el punto de entrada de la aplicación de consola.
//

#include "stdafx.h"
#include <iostream>
#include <conio.h>
#include <string>
using namespace std;

void ingresarProducto();
void venderProducto();
void comprarProducto();

int primera = 0;
int cod_producto = 0;
string nombre_producto = "";
float cant_inicial = 0;
float cant_minima = 0;
void menu() {
	system("cls");
	int op = 0;
	cout << "Selecciones una opcion" << endl;
	cout << "1.) Ingrese producto: " << endl;
	cout << "2.) Venta del producto: " << endl;
	cout << "3.) Comprar Producto: " << endl;
	cout << "4.) Salir: " << endl;
	cin >> op;
	if (op == 1) {
		ingresarProducto();
	}
	else if (op == 2) {
		venderProducto();
	}
	else if (op == 3) {
		comprarProducto();
	}
	else {
		cout << "Adios: " << endl;
	}
}
void ingresarProducto() {
	primera = 1;
	cout << "Ingrese codigo del producto: " << endl;
	cin >> cod_producto;
	cout << "Nombre del producto." << endl;
	cin >> nombre_producto;
	cout << "Cantidad Inicial ." << endl;
	cin >> cant_inicial;
	cout << "Cantidad Minima: " << endl;
	cin >> cant_minima;
	menu();
}
void venderProducto() {

}
void comprarProducto() {

}


int main()
{
	menu();
    return 0;
}

