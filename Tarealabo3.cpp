#include <iostream>

using namespace std;

struct nodo{
	int dato;
	nodo *sig;
	char nombre[20];
	int cantidad;
	char tipo[20];
	char bebida[20];
	char ingredientes[20];
};

typedef struct nodo *PLista;

class ListaSimple{

	private:
    	nodo *pInicio;
	
	public:
    	ListaSimple();
    	void menu(void);
    	void ingresarDatos(PLista &lista);
    	void mostrarLista(PLista q);

};

ListaSimple::ListaSimple(void){
	pInicio = NULL;
}

void menu(void){

    cout << endl << endl;
	cout <<"\MENU" << endl << endl;
	cout << "PUPUSAS DE MAIZ Y ARROZ" << endl;
    cout << "REVUELTAS" << endl;
    cout << "QUESO" << endl;
    cout << "FRIJOL CON QUESO" << endl;
	cout << "BEIBIDAS: " << endl;
    cout << "GASEOSAS" << endl;
    cout << "CAFE" << endl;
    cout << "ATOL" << endl;
    cout << "CHOCOLATES" << endl;
}


void ListaSimple::ingresarDatos(PLista &lista)
{
   
   PLista t, q = new(struct nodo);
  
	cout<<"\tORDENES";
    cout << endl << endl;
	cout<<"\tPEDIDO";
    cout << endl << endl;
	cin.ignore();
    cout << "NOMBRE: "; cin.getline(q->nombre, 20);
	cin.ignore();
    cout << "CANTIDAD DE PUPUSAS "; 
    cin>>q->cantidad;
	cin.ignore();
    cout << "TIPO DE PUPUSA: "; 
    cin.getline(q->tipo, 20);
	cin.ignore();
    cout << "BEBIDAS: "; 
    cin.getline(q->bebida, 20);
	cin.ignore(); 
    cout <<"INGREDIENTES: "; 
    cin.getline(q->ingredientes, 20);
    cout << endl;

	q->sig = NULL;

	if(lista==NULL){
    	lista = q;
	} 
    else{
    	t = lista;

    	while(t->sig!=NULL){
            	t = t->sig;
    	}
    	t->sig = q;
	}
}

void ListaSimple::mostrarLista(PLista q){

	int i = 1;

	while( q!= NULL){

        cout << endl << endl;
    	cout << "\tPupuseria"<<endl;
        cout << "ORDEN ["<<i<<"] ";
    	cout << "\n\t------------------------";
    	cout << "\n\tNOMBRE"<< q->nombre <<endl;
    	cout << "\tCANTIDAD DE PUPUSAS: "<< q->cantidad <<endl;
    	cout << "\tMAIZ O ARROZ: "<< q->tipo <<endl;
    	cout << "\tBEBIDA: " << q->bebida << endl;
    	cout << "\tINGREDIENTES: " << q->ingredientes <<endl;
    	q=q->sig;
    	i++;
	}
}

int main(void){

 PLista lista = NULL;
 ListaSimple objListaSimple;

   menu();
   int cantidad;
   cout<<endl;
   cout<<"Ingrese las ordenes de pupusas: ";
   cin >> cantidad;
   for(int i = 1; i <= cantidad; i++){
       objListaSimple.ingresarDatos(lista);
    }

    objListaSimple.mostrarLista(lista);
    cout << endl << endl;

	return 0;
}