//
// Created by oviwa on 29/10/2022.
//
#include <iostream>
#include "Triangulo.h"


using namespace std;

float Triangulo::calcularPerimetro() {
    perimetro = l1+l2+l3;
    return perimetro;
}

float Triangulo::calcularArea() {
    area = (base*altura)/2;
    return area;
}

void Triangulo::MostrarDatos() {
    cout<<"El perimetro es: "<<perimetro<<endl;
    cout<<"El area es: "<<area<<endl;
}