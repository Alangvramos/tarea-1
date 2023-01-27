/* Alan Giovanni Valle Ramos 26/01/2023*/
#include <iostream>

using namespace std;
//Implementación de clases

class Materia{
    private:
        int Clave;
        string Nombre;
        string ProfesorTit;
        string LibroTexto;
    public:
    	//constructor
        Materia(int Clavs, string Name, string Profe, string Libr){
            Clave=Clavs;
            Nombre=Name;
            ProfesorTit=Profe;
            LibroTexto=Libr;
        }

        void Imprime(){
            cout<<"\n\n\nClave:\t\t\t"<<Clave<<"\nNombre: \t\t"<<Nombre<<"\nProfesor: \t\t"<<ProfesorTit<<"\nLibroTexto: \t\t"<<LibroTexto;
        }
        void CambiarClave(int clav){
            Clave=clav;
        }
        void CambiarProfe(string pro){
            ProfesorTit=pro;
        }
};
int main(){
    Materia Programacion(0002, "Alan", "Giovanni", "Estructura de Datos");
    Materia BasesDatos(0001, "Samuel", "valeria", "oracle");
    //Declaración de variables
	int opc, clave;
    string profe;
    //Menú de opciones
    do{
    cout<<"     MENU\n";
    cout<<"1.-Cambiar la clave de la materia Programacion\n";
    cout<<"2.-Cambiar el nombre del maestro que imparte la materia Bases de Datos\n";
    cout<<"3.-Imprimir todos los datos de la materia Bases de Datos\n";
    cout<<"4.-Salir\n";
    cout<<"Elige una opcion: \t";
    cin>>opc;
    cout<<"\n";
    switch(opc){
        case 1:
            cout<<"Ingresa la clave nueva: \t";
            cin>>clave;
            Programacion.CambiarClave(clave);
            break;
        case 2:
            cout<<"Escribe el nuevo nombre del profesor: \t";
            cin>>profe;
            BasesDatos.CambiarProfe(profe);
            break;
        case 3:
            BasesDatos.Imprime();
            break;
    }
    cout<<"\n\n";
    }while(opc!=4);
    return 0;
}
