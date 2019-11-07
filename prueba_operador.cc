#include "LNear.h"
#include "Coleccion.h"

using namespace std;

int main(){

	LNear a;

	Localidad l1=Localidad("AA");
	Localidad l2=Localidad("BB");
	Localidad l3=Localidad("CC");
	Localidad l4=Localidad("DD");
	Localidad l5=Localidad("FF");
	Localidad l6=Localidad("A");
	Localidad l7=Localidad("AA");

	a.insertaLocalidad(l3, 10);
	a.insertaLocalidad(l1, 10);
	a.insertaLocalidad(l4, 10);
	a.insertaLocalidad(l4, 15);
	a.insertaLocalidad(l4, 5);
	a.insertaLocalidad(l5, 10);
	a.insertaLocalidad(l2, 10);
	a.insertaLocalidad(l6, 10);
	a.insertaLocalidad(l7, 10);
	a.insertaLocalidad(l7, 0);
	a.insertaLocalidad(l7, -1);
	a.insertaLocalidad(l7, -300);

	LNear a2=a;
	//a2=a;

	cout<<"Lista a:"<<endl<<a<<endl;
	cout<<"Lista a2:"<<endl<<a2<<endl;

	a.borraLocalidades(0);
	a2.borraLocalidades(0);

	cout<<"Lista a:"<<endl<<a<<endl;
	cout<<"Lista a2:"<<endl<<a2<<endl;


}