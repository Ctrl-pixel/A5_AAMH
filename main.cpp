#include <iostream>
#include <stdlib.h>
#include "Cuadrado.h"
#include "Triangulo.h"
#include "Trapecio.h"
#include "Circulo.h"

using namespace std;
int main() {
    float lado, altura,radio, diametro;
    float baseMenor, BaseMayor, base;
    int opc;

    Cuadrado* miCuadrado;
    Triangulo* miTriangulo;
    Trapecio* miTrapecio;
    Circulo* miCirculo;

    miCuadrado = new Cuadrado(lado,lado);
    miTriangulo = new Triangulo(lado,lado,lado,base,altura);
    miTrapecio = new Trapecio(baseMenor,BaseMayor,altura,lado);
    miCirculo = new Circulo(radio,diametro);

    cout<<"Bienvenido a la calculadora geometrica"<<endl;

        do {
            cout<<"\n\t.:Menu de opciones:."<<endl;
            cout<<"1.- Calcular el perimetro y el area de un Cuadrado"<<endl;
            cout<<"2.- Calcular el perimetro y el area de un Triangulo"<<endl;
            cout<<"3.- Calcular el perimetro y el area de un Trapecio"<<endl;
            cout<<"4.- Calcular el perimetro y el area de un Circulo"<<endl;
            cout<<"5.- Salir"<<endl;

            switch (opc) {
                case 1:

                    cout<<"Ingrese el lado 1 del cuadrado: ";
                    cin>>lado;
                    cout<<"Ingrese el lado 2 del cuadrado: ";
                    cin>>lado;
                    miCuadrado->MostrarDatos();
                    break;
                case 2:
                    cout<<"Ingrese el lado 1 del triangulo: ";
                    cin>>lado;
                    cout<<"Ingrese el lado 2 del triangulo: ";
                    cin>>lado;
                    cout<<"Ingrese el lado 3 del triangulo: ";
                    cin>>lado;
                    cout<<"Ingrese la base del triangulo: ";
                    cin>>base;
                    cout<<"Ingrese la altura del triangulo: ";
                    cin>>altura;
                    miTriangulo->MostrarDatos();
                    break;
                case 3:
                    cout<<"Ingrese el lado del trapecio: ";
                    cin>>lado;
                    cout<<"Ingrese la base menor del trapecio: ";
                    cin>>baseMenor;
                    cout<<"Ingrese la base mayor del trapecio: ";
                    cin>>BaseMayor;
                    cout<<"Ingrese la altura del trapecio: ";
                    cin>>altura;
                    miTrapecio->MostrarDatos();
                    break;
                case 4:
                    cout<<"Ingrese el diametro del circulo: ";
                    cin>>diametro;
                    cout<<"Ingrese el radio del circulo: ";
                    cin>>radio;
                    miCirculo->MostrarDatos();
                    break;
                case 5:
                    break;
                default:
                    cout<<"Opcion incorrecta"<<endl;


            }

        } while (opc != 5);





    system("pause");
    delete[] miCuadrado;
    delete[] miTriangulo;
    delete[] miTrapecio;
    delete[] miCirculo;

    return 0;
}
