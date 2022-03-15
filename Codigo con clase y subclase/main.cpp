#include <iostream>
#include <string>
#include <stdlib.h>
using namespace std;

class cajero{
    private:
    int codigo;
    int clave;
    string nombre;
    public:
    cajero (int,int,string);
    void leer();
    void puesto();

};
//Constructor
cajero::cajero(int _codigo,int _clave, string _nombre){
    codigo=_codigo;
    nombre=_nombre;
    clave=_clave;
}
void cajero::leer(){
    string _nombre;
    int _edad;
    int _carnet;
    _nombre= "Arlethe";
    _edad=20;
    _carnet=9959-21-1160;
    cout<<"Yo soy "<<_nombre<<"  tengo "<<_edad<<" y soy Supervisora nivel Departamental " <<endl;
    }

void cajero::puesto(){
    string _nombre;
    int _edad;
    int _carnet;


_nombre="Arlethe";
_edad=20;
_carnet=9959-21-1160;
    cout<<"Yo soy "<<_nombre<<"  tengo "<<_edad<< " y soy Supervisora" <<endl;
    }
//Principal
int main(){
    int edad;
    string nombre;
    int carnet;

    cajero P1(edad,carnet,nombre);
    P1.leer();
    P1.puesto();

    cout<<"\n";


    return 0;
    }
