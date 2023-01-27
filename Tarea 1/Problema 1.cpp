/*Alan Giovanni Valle 
26/01/23*/


#include <iostream>

using namespace std;
//Clases declaradas
class Empleado{
    private:
        int ClaveEmpleado;
        string Nombre;
        string Domicilio;
        float Sueldo;
        std::string Reporta;
    public:
        Empleado(int clav, string name, float sue){
            ClaveEmpleado=clav;
            Nombre=name;
            Domicilio="";
            Sueldo=sue;
            Reporta="";
        }
        void Imprime(){
            cout<<"\n\n\nClave del empleado:\t"<<ClaveEmpleado<<"\nNombre: \t\t"<<Nombre<<"\nDomicilio: \t\t"<<Domicilio<<"\nSueldo: \t\t"<<Sueldo<<"\nReporta a: \t\t"<<Reporta;

        }
        void CambiarDomici(string domi){
            Domicilio=domi;
        }
        void CambiaReporta(string qr){
            Reporta=qr;
        }
        void ActualSueldo(float sueld){
            sueld = sueld*Sueldo/100;
            Sueldo = Sueldo+sueld;
        }
};
int main()
{   //declaracion
    Empleado JefePlanta(0002, "Alan ramos",1000);
    Empleado JefePersonal(0001, "Giovanni valle",1000);
    int opc, clave;
    string domi, qr;
    float sueld;
    do{
    	//Menu de opciones
    cout<<"     MENU\n";
    cout<<"1.-Cambiar domicilio\n";
    cout<<"2.-Actualizar sueldo\n";
    cout<<"3.-Mostrar los datos del empleado\n";
    cout<<"4.-Cambiar nombre de quien reporta\n";
    cout<<"5.-Salir\n";
    cout<<"Elige una opcion: \t";
    cin>>opc;
    cout<<"\n";
    switch(opc){
    	//Ingresar un domicilio
        case 1:
            cout<<"Ingresa la clave: \t";
            cin>>clave;
            if(clave==1234){
            cout<<"\n\nJefe de Planta\nIngresa el domicilio: \t";
            cin>>domi;
            JefePlanta.CambiarDomici(domi);
            }
            if(clave==4321){
            cout<<"\n\nJefe Personal\nIngresa el domicilio: \t";
            cin>>domi;
            JefePersonal.CambiarDomici(domi);
            }
            break;
            //Cambio de sueldo
        case 2:
            cout<<"Ingresa la clave: \t";
            cin>>clave;
            if(clave==1234){
            cout<<"\n\nJefe de Planta\nIngresa el porcentaje de incremento a su sueldo: ";
            cin>>sueld;
            JefePlanta.ActualSueldo(sueld);
            }
            if(clave==4321){
            cout<<"\n\nJefe Personal\nIngresa el porcentaje de incremento a su sueldo";
            cin>>sueld;
            JefePersonal.ActualSueldo(sueld);
            }
            break;
        case 3:
            cout<<"Ingresa la clave: \t";
            cin>>clave;
            if(clave==1234){
                cout<<"\n\nJefe de Planta";
                JefePlanta.Imprime();
            }
            if(clave==4321){
                cout<<"\n\nJefe Personal";
                JefePersonal.Imprime();
            }
            break;
            //Cambiar nombre de quien reporta
        case 4:
            cout<<"Ingresa el nombre de quien reporta: \t";
            cin>>qr;
            JefePlanta.CambiaReporta(qr);
            break;
    }
    cout<<"\n\n\n";
    }while(opc!=5);
    return 0;
}
