//#include "stdafx.h"
#include <iostream>
#include "Poligon.h"
using namespace std;
// constructors
Poligon::Poligon() {
	// Pre: cert; Post: el polígon no té punts
	a_n = 0;
}

// consultors
int Poligon::nVertexs() const {
	//Pre: cert; Post: retorna el nombre de vèrtexs
	return a_n;
}
void Poligon::mostra() const {
	// Pre:cert; Post: mostra els vèrtexs per pantalla
	if (a_n > 0) {
		a_t[0].mostra();
		for (int i = 1; i < a_n; i++) {
			cout << ", "; a_t[i].mostra();
		}
	}
}

double Poligon::perimetre()const {
	// Pre: el polígon té almenys dos vèrtexs; Post: retorna el perímetre del polígon
	double distancia = 0;
	for (int i = 0; i <a_n-1; i++) {
		distancia += a_t[i].distancia(a_t[i + 1]);
	}
	distancia += a_t[0].distancia(a_t[a_n - 1]);
	return distancia;
}
Punt2D Poligon::centre() const {
	// Pre: el polígon té almenys dos vèrtexs; Post: retorna el punt mig del polígon
	Punt2D res;
	double x = 0, y = 0;
	for (int i = 0; i<a_n; i++) {
		x += a_t[i].projeccio_eix_x(); y += a_t[i].projeccio_eix_y();
	}
	res = Punt2D(x / a_n, y / a_n);
	return res;
}
// modificadors
void Poligon::afegirPunt(Punt2D p) {
	//Pre: el polígon té menys de MAX_VERTEXS
	//Post: s’ha afegit p com a darrer vèrtex
	a_t[a_n] = p;
	a_n++;
}