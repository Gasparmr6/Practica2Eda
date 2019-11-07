#include <iostream>
#include "Coleccion.h"
#include "Coordenadas.h"

using namespace std;

int main(int argc, char *argv[]){
	
	Coleccion c = Coleccion();

	c.lectura(argv[1]);

	for(unsigned int i=0; i<c.getLocalidades().size(); i++){

		string nom = c.getLocalidades()[i].getNombre();
		int fila = c.getLocalidades()[i].getCoor().getFila();
		int col = c.getLocalidades()[i].getCoor().getColumna();
		string frec = c.getLocalidades()[i].getInfo().getMasFrecuente();
		string top = c.getLocalidades()[i].getInfo().getTop();

		if(top != "") {

		  cout << nom << " (" << fila << "," << col << "): " << frec << " - " <<top<<endl;
		}
		else 
		  cout << nom << " (" << fila << "," << col << "): " << frec<<endl;
                
                
            
	}
 

}
