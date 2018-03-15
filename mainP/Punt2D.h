#pragma once
class Punt2D
{
public:
	// Descripci�: un punt en el pla

public:
	// CONSTRUCTORS
	Punt2D(double x, double y); //Pre:--; Post: el punt �s (x,y)
	Punt2D(); //Pre:--; Post: el punt �s (0,0)
	bool operator==(const Punt2D &p) const;
	bool operator!=(const Punt2D &p) const;
			  // M�TODES CONSULTORS
	double projeccio_eix_x() const;
	//Pre: --; Post: retorna la projecci� del punt a sobre l�eix x
	double projeccio_eix_y() const;
	//Pre: --; Post: retorna la projecci� del punt a sobre l�eix y
	double distancia(Punt2D p) const;
	//Pre: --; Post: retorna la dist�ncia del punt a p
	void mostra() const;
	//Pre: --; Post: mostra el punt en forma (x,y)
	bool son_iguals(Punt2D p) const;
	//: --; Post: retorna cert si p i el punt s�n iguals
	Punt2D punt_mig(Punt2D p) const;
	//Pre:--; Post: el punt mig entre el punt i p

	// M�TODES MODIFICADORS
	void desplacament(double vector_x, double vector_y);
	//Pre:--; Post: punt despla�at amb vector (vector_x,vector_y)
	void desplacament(Punt2D p);
	//Pre:--; Post: punt despla�at amb vector 0p
	void llegir();
	//Pre:--; Post: el punt �s el llegit de teclat
	void canvia_posicio(double x, double y);
	// Pre: -- ; Post: El punt �s (x,y)

private: // PART PRIVADA
	double a_x, a_y; //atributs (usem coordenades cartesianes)

};
