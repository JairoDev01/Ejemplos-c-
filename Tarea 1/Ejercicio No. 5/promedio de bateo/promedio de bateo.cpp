// promedio de bateo.cpp: define el punto de entrada de la aplicación de consola.
//

#include "stdafx.h"
#include <iostream>
#include <conio.h>
#include <string>

using namespace std;

int main()
{
	string name;
	//Veces Al bate
	int VB=0,
		//Hit conectados
		HIT=0,
		//Extrabases conectadas
		EXT=0,
		//Cantidad de sacrificios
		S=0,
		//Cantidad de bases por Bolas Recibidas
		BB=0;
	//promedio de Bateo PB = BBC / VLB * 1000
	float PB = 0,
		PB1 = 0,
		//BBC = HIT + EXT
		BBC = 0,
		//VLB = VB - S - BB
		VLB = 0,
		VLB1 = 0;
	//40 Jugadores:
	int sizeJ = 40;
	for (int i = 0; i < sizeJ; i++)
	{
		cout << "Nombre Jugador: " << endl;
		cin >> name;
		cout << "Veces al Bate: " << endl;
		cin >> VB;
		cout << "Hit Conectados" << endl;
		cin >> HIT;
		cout << "Extrabases Conectadas" << endl;
		cin >> EXT;
		cout << "Cantidad de Sacrificios" << endl;
		cin >> S;
		cout << "Cantidad de Bases por Bolas Recibidas: " << endl;
		cin >> BB;
		BBC = HIT + EXT;
		VLB = VB - S;
		VLB1 = VLB - BB;
		if (BBC != 0 && VLB1 != 0) {
			PB = BBC / VLB1;
			PB1 = PB * 1000;
		}
		cout << "Promedio de Bateo de : " <<name<< " es de: "<<PB1<<endl;
	}
    return 0;

}

