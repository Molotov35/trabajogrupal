#include <iostream>

using namespace std;

class persona
{
    public:
        persona(int, int, int, string,int);
        void    Consultar_Edad;
        void    Cambiar;
        void    Ingresar;
        void    Vaciar;
        void    Verificar;
    private:
        string Nombre;
        int E-mail;
        int ID;
        int Edad;
        int Telefono;

};
persona::persona(int iID, int iEdad, int iTelefono, string iNombre, int iE-mail){
ID = iID;
Nombre = iNombre;
E-mail = iE-mail;
Telefono = iTelefono;
Edad = iEdad;
}
class EmpleadoVendedor : public persona{
private:
    int CodigoVendedor;
public:
    EmpleadoVendedor(int, int, int, string, int);
    MostrarVendedor;
};
EmpleadoVendedor::EmpleadoVendedor(int iID, int iEdad, int iTelefono, string iNombre, int iE-mail, int iCodigoVendedor) : persona(iID,iEdad,iTelefono,iNombre,iE-mail,iCodigoVendedor){
CodigoVendedor = iCodigoVendedor;
}

void Persona::Consultar_Edad(){
cout<<"Soy "<<Nombre<<"y tengo "<<Edad<<" anios"<<endl;
}
void Persona::Ingresar(){
cout<<"Soy "<<Nombre<<" y estoy en el modulo Ingresar"<<endl;
}
void Persona::Cambiar(){
cout<<"Soy "<<Nombre<<" y estoy en el modulo Cambiar"<<endl;
}
void Persona::Vaciar(){
cout<<"Soy "<<Nombre<<" y estoy en el modulo Vaciar"<<endl;
}
void Persona::Verificar(){
cout<<"Soy "<<Nombre<<" y estoy en el modulo Verificar"<<endl;
}
void EmpleadoVendedor::MostrarVendedor(){
Consultar_Edad;
Ingresar;
Cambar;
Vaciar;
Verificar;
cout<<"Mi codigo de Vendedor es "<<CodigoVendedor<<endl;
}

int main(){
Persona pl= Persona(321,21,12345678, "David","Rojas@gmail.com");
pl.Consultar_Edad();
pl.Ingresar();
pl.Cambiar();
pl.Vaciar();
pl.Verificar();
cout<<""<<endl;
cout<<""<<endl;
EmpleadoVendedor p2= EmpleadoVendedor(123,81,66455587, "Jose", "jose@gmail.com",557);
p2.MostrarVendedor();
cout<<""<<endl;
cout<<""<<endl;
cout<<"Carlos David Rojas Coronado carnet:9959-21-504"<<endl;
}
