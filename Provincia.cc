#include "LNear.h"
#include "Coleccion.h"
#include "Localidad.h"
#include "Provincia.h"

//es necesario el constructor por defecto?*
Provincia::Provincia(){

	lc = Localidad();
	locprox = LNear();
}

Provincia::Provincia(Localidad l){

	lc = l;
	locprox = LNear();
}

Provincia::Provincia(const Provincia &p){

	lc = p.lc;
	locprox = p.locprox;
}

Provincia::~Provincia(){

	lc = Localidad();
	locprox = LNear();
}

Provincia & Provincia::operator=(const Provincia &p){

	if (this != &p) {

		lc = p.lc;
		locprox = p.locprox;
	}
	return *this;
}


void Provincia::calculaCercanas(Coleccion &c, int n){

	
}

int Provincia::borraLocalidad(string s){

	int dev = 0;

	return dev;
}

LNear & Provincia::getCercanas(){

	return locprox;
}

string Provincia::getCostera(Coleccion &c){

	string dev = "";
	return dev;
}

LNear Provincia::getCosteras(Coleccion &c){

	return locprox;
}

string Provincia::getConAeropuerto(){

	string dev = "";
	return dev;
}

ostream & operator<<(ostream &os, const Provincia &p){

	os <<"";
	return os;
}