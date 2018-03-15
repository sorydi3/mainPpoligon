#include"Punt2D.h"

class Poligon
{
	//Descripció: guarda el nombre de vèrtexs i els vèrtexs d’un polígon al pla
	//Invariant: el nombre de vèrtexs >=0
	// interfície de la classe
public:
	static const int MAX_VERTEX = 100;
	// constructors
	Poligon();
	// mètodes consultors
	int nVertexs() const;
	// Pre: cert;
	// Post: retorna el nombre de vèrtexs
	void mostra() const;
	// Pre: cert;
	// Post: mostra els vèrtexs per pantalla
	double perimetre() const;
	//Pre: el polígon té almenys dos vèrtexs
	//Post: retorna el perímetre del polígon
	Punt2D centre() const;
	//Pre: el polígon té almenys dos vèrtexs
	//Post: retorna el punt mig del polígon
	// mètodes modificadors
	void afegirPunt(Punt2D p);
	//Pre: el polígon té menys de MAX_VERTEXS
	//Post: s’ha afegit p com a darrer vèrtex
	// no hi ha mètodes de classe
private:
	// Descripció: guarda un polígon al pla de MAX_VERTEX punts
	// Inv: a_n >= 0
	Punt2D a_t[MAX_VERTEX];
	int a_n;
};

