//
// Created by oviwa on 29/10/2022.
//
#include <iostream>
#include "Trapecio.h"

using namespace std;

float Trapecio::calcularPerimetro() {
    perimetro = (2*lado)+(baseMenor+BaseMayor);
    return perimetro;
}

float Trapecio::calcularArea() {
    area = altura*(baseMenor+BaseMayor)/2;
    return area;
}

void Trapecio::MostrarDatos() {
    cout<<"El perimetro es: "<<perimetro<<endl;
    cout<<"El area es: "<<area<<endl;
}