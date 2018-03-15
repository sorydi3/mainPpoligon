// mainP.cpp : Defines the entry point for the console application.
//

//#include "stdafx.h"
#include<iostream>
#include"Poligon.h"
#include"Punt2D.h"
#include<iomanip>
using namespace std;

int main()
{
	// Entrada: un polígon triangle
	// Sortida: mostra el triangle, mostra un quadrat i el seu perímetre
	cout << "Entra els punts (per acabar, torna a entrar el primer):" << endl;
	Poligon pol; // un triangle
	Punt2D p;
	Punt2D pInicial;
	Punt2D recent;
	p.llegir();
	pInicial = p;
	pol.afegirPunt(p);
	p.llegir();
	recent = p;
	pol.afegirPunt(p);
	while (!pInicial.son_iguals(recent)) {
		p.llegir();
		recent = p;
		pol.afegirPunt(p);
	}
	//pol.mostra();
	cout << "El perímetre és " <<fixed<<setprecision(2)<< pol.perimetre() << endl;
	// el mètode perimetre() no està implementat
	//cout << endl << "El perimetre es " << pol.perimetre() << endl;
	return 0;

}