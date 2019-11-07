#include "LNear.h"
#include "Coleccion.h"

using namespace std;

static void muestra_lista(LNear l){

	cout<<"Muestro Lista: \n"<<l<<endl;
}

int main(){
	LNear lista=LNear();
	Localidad loc=Localidad("patata");
	cout<<"primera insercion\n";
	lista.insertaLocalidad(loc,10);
	
	cout<<"SEegunda insercion\n";
	Localidad loc2=Localidad("patata");	
	lista.insertaLocalidad(loc2,8);
	
	//cout<<lista;
	muestra_lista(lista);

	cout<<endl<<endl;
	
	cout<<"Llego aqui";

	cout<<endl<<endl;

	return 0;
}