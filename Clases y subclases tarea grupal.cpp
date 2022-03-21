#include <iostream>
#include <string>
#include <stdlib.h>
using namespace std;

class Persona{
    private:
    int edad;
    int carnet;
    string nombre;
    public:
    Persona (int,int,string);
    void leer();
    void puesto();

};
//Constructor
Persona::Persona(int _edad,int _carnet, string _nombre){
    edad=_edad;
    nombre=_nombre;
    carnet=_carnet;
}
void Persona::leer(){
    string _nombre;
    int _edad;
    int _carnet;
    _nombre= "Montserrat Osorio";
    _edad=25;
    _carnet=9491-21-9664;
    cout<<"Yo soy "<<_nombre<<"  Y tengo "<<_edad<<" soy empleado" <<endl;
    }

void Persona::puesto(){
    string _nombre;
    int _edad;
    int _carnet;


_nombre="Montserrat Osorio";
_edad=25;
_carnet=9491-21-9664;
    cout<<"Yo soy "<<_nombre<<" y tengo "<<_edad<< "  soy empleado" <<endl;
    }
//Principal
int main(){
    int edad;
    string nombre;
    int carnet;

    Persona P1(edad,carnet,nombre);
    P1.leer();
    P1.puesto();

    cout<<"\n";


    return 0;
    }
