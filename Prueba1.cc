#include "LNear.h"
#include "Coleccion.h"

using namespace std;
/*
static void muestra_lista(LNear l){

	cout<<"Muestro Lista: \n"<<l<<endl;
}
*/
//static void muestra_nodo(NodoL n){

//	cout<<"Muestro Nodo: \n"<<n<<endl;
//

int main(){

	//Localidad lo("avestruz");
	//NodoL n(lo,12);

	//cout<<n<<endl;
	//muestra_nodo(n);

	LNear a=LNear();

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


	cout<<"IGUALAMOS\n";
	LNear a2=a;

	
	//cout<<a<<endl;
	cout<<endl;
	
	cout<<"Lista a: "<<endl<<a<<endl;
	cout<<"Lista a2: "<<endl<<a2<<endl;

	//LNear a3();
	//LNear a4 = a3;
	//cout<<"Lista a3: "<<a3<<endl;
	//cout<<"Lista a4: "<<a4<<endl;

	LNear a5 = LNear();
	LNear a6 = a5;
	cout<<"Lista a5: "<<a5<<endl;
	cout<<"Lista a6: "<<a6<<endl;



	
	cout<<endl<<"Empiezo a borrar:\n";
	cout<<endl<<"Borro DD: "<<a.borraLocalidad("DD");
	cout<<endl<<"Borro DD: "<<a.borraLocalidad("DD");
	cout<<endl<<"Borro DD: "<<a.borraLocalidad("DD");
	cout<<endl<<"Borro AA: "<<a.borraLocalidad("AA");
	cout<<endl<<"Borro A: "<<a.borraLocalidad("A");
	cout<<endl;

	cout<<a<<endl;
	


	cout<<endl<<"Borro: "<<a.borraLocalidad("A")<<endl;

	cout<<endl<<"Borro A: "<<a.borraLocalidad("A");
	cout<<endl<<"Borro AA: "<<a.borraLocalidad("AA");
	cout<<endl<<"Borro BB: "<<a.borraLocalidad("BB");
	cout<<endl<<"Borro FF: "<<a.borraLocalidad("FF");
	cout<<endl<<"Borro CC: "<<a.borraLocalidad("CC");
	cout<<endl<<"Borro AA: "<<a.borraLocalidad("AA");
	cout<<endl<<"Borro AA: "<<a.borraLocalidad("AA");

	cout<<endl;	
	cout<<a<<endl;
	cout<<endl;

	cout<<endl<<"Borro AA: "<<a.borraLocalidad("AA")<<endl;
	cout<<a<<endl;


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

	cout<<a<<endl;
	cout<<endl;

	a.borraLocalidades(9);

	cout<<a<<endl;

	cout<<"Compruebo operator=\n";
	cout<<a;
	cout<<"Booroo mucho\n";
	a.borraLocalidades(20);
	cout<<a;

	cout<<"Booroo nada\n";
	a.borraLocalidades(0);
	cout<<a<<endl;

	cout<<"LISTA 2:"<<a2;

	a2.borraLocalidades(0);
	cout<<"LISTA 2"<<a2;

}



