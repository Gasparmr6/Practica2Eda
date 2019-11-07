#include "LNear.h"
#include "Coleccion.h"

using namespace std;

int main(){
	LNear a;

	LNear b;



	Localidad l1("Barcelona");
	Localidad l2("Madrid");
	Localidad l3("Alicante");
	Localidad l4("Cuenca");
	Localidad l5("Cocentaina");
	Localidad l6("Alcoy");
	Localidad l7("Gandia");
	Localidad l8("Malaga");

	b.insertaLocalidad(l6,2);
	b.insertaLocalidad(l5,1);
	b.insertaLocalidad(l7,8);

	cout<<"Posición 1:"<<b.getLocalidad(1).getNombre()<<endl;
	cout<<"Posición 0:"<<b.getLocalidad(0).getNombre()<<endl;
	cout<<"Posición 2:"<<b.getLocalidad(2).getNombre()<<endl;
	cout<<"Posición -1:"<<b.getLocalidad(-1).getNombre()<<endl;
	cout<<"Posición 3:"<<b.getLocalidad(3).getNombre()<<endl;


	a.insertaLocalidad(l1, 10);
	cout<<"Inserto principio Barcelona porque esta vacio\n";
	a.insertaLocalidad(l2, 12);
	cout<<"Inserto final Madrid\n";
	a.insertaLocalidad(l3, 11);
	cout<<"Inserto Alicante enmedio de Barcelona y Madrid por la distancia\n";
	a.insertaLocalidad(l4, 12);
	cout<<"Inserto Cuenca antes de Madrid por el nombre\n";
	a.insertaLocalidad(l5, 7);
	cout<<"Inserto Cocentaina al principio por distancia\n";
	a.insertaLocalidad(l6, 7);
	cout<<"Inserto Alcoy al principio por el nombre\n";
	a.insertaLocalidad(l3, 11);
	cout<<"Intento volver a insertar una localidad con mismo nombre y distancia\n";
	a.insertaLocalidad(l7, 15);
	cout<<"Inserto Gandia al final porque distancia mayor\n";
	a.insertaLocalidad(l8, 15);
	cout<<"Inserto al final por distancia igual y nombre\n";
	a.insertaLocalidad(l6, 7);
	cout<<"Intento volver a insertar una localidad con mismo nombre y distancia\n";
	a.insertaLocalidad(l4, 20);
	cout<<"Inserto Cuenca al final scon distinta distancia\n";

	cout<<endl<<"EL RESULTADO TIENE QUE SER:"<<endl;
	cout<<"Alcoy->Cocentaina->Barcelona->Alicante->Cuenca->Madrid->Gandia->Malaga->Cuenca\n"<<endl;
	

	cout<<a;

	cout<<"\nAHORA VAMOS A PROBAR A ELIMINAR LOCALIDADES POR NOMBRE\n"<<endl;

	cout<<"La distancia de Alcoy era: "<<a.borraLocalidad("Alcoy")<<endl;
	cout<<"La distancia de Cuenca era: "<<a.borraLocalidad("Cuenca")<<endl;
	cout<<"La distancia de Cuenca era: "<<a.borraLocalidad("Cuenca")<<endl;
	cout<<"La distancia de Madrid era: "<<a.borraLocalidad("Madrid")<<endl;
	cout<<"La distancia de Cocentaina era: "<<a.borraLocalidad("Cocentaina")<<endl;

	cout<<"\nVUELVO A MOSTRAR LA LISTA\n"<<a<<endl;

	cout<<"AHORA VAMOS A PROBAR A ELIMINAR LOCALIDADES POR DISTANCIA\n"<<endl;
	cout<<"Borro 10"<<endl;
	a.borraLocalidades(10);

	cout<<"\nVUELVO A MOSTRAR LA LISTA:\n"<<a<<endl;
	cout<<"Borro 7"<<endl;
	a.borraLocalidades(7);

	cout<<"\nVUELVO A MOSTRAR LA LISTA:\n"<<a<<endl;

	cout<<"Ahora la lista deberia estar completamente vacia y voy a insertar tres ciudades"<<endl;

	a.insertaLocalidad(l6,2);
	a.insertaLocalidad(l5,1);
	a.insertaLocalidad(l7,8);

	cout<<a<<endl;

	cout<<"POR ULTIMO VOY A CONSULTAR LAS LOCALIDADES DE LA LISTA\n"<<endl;

	cout<<"Posición 1:"<<a.getLocalidad(1).getNombre()<<endl;
	cout<<"Posición 0:"<<a.getLocalidad(0).getNombre()<<endl;
	cout<<"Posición 2:"<<a.getLocalidad(2).getNombre()<<endl;
	cout<<"Posición -1:"<<a.getLocalidad(-1).getNombre()<<endl;
	cout<<"Posición 3:"<<a.getLocalidad(3).getNombre()<<endl;

	return 0;
}