//
// Created by oviwa on 29/10/2022.
//
#include <iostream>
#include "Cuadrado.h"

using namespace std;

float Cuadrado::calcularArea() {
    area = lado1*lado2;
    return area;
}

float Cuadrado::calcularPerimetro() {
    perimetro = 2*(lado1+lado2);
    return perimetro;
}

void Cuadrado::MostrarDatos() {
    cout<<"El perimetro es: "<<perimetro<<endl;
    cout<<"El area es: "<<area;
}