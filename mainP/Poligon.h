#include"Punt2D.h"

class Poligon
{
	//Descripci�: guarda el nombre de v�rtexs i els v�rtexs d�un pol�gon al pla
	//Invariant: el nombre de v�rtexs >=0
	// interf�cie de la classe
public:
	static const int MAX_VERTEX = 100;
	// constructors
	Poligon();
	// m�todes consultors
	int nVertexs() const;
	// Pre: cert;
	// Post: retorna el nombre de v�rtexs
	void mostra() const;
	// Pre: cert;
	// Post: mostra els v�rtexs per pantalla
	double perimetre() const;
	//Pre: el pol�gon t� almenys dos v�rtexs
	//Post: retorna el per�metre del pol�gon
	Punt2D centre() const;
	//Pre: el pol�gon t� almenys dos v�rtexs
	//Post: retorna el punt mig del pol�gon
	// m�todes modificadors
	void afegirPunt(Punt2D p);
	//Pre: el pol�gon t� menys de MAX_VERTEXS
	//Post: s�ha afegit p com a darrer v�rtex
	// no hi ha m�todes de classe
private:
	// Descripci�: guarda un pol�gon al pla de MAX_VERTEX punts
	// Inv: a_n >= 0
	Punt2D a_t[MAX_VERTEX];
	int a_n;
};

