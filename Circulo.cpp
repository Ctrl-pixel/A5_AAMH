//
// Created by oviwa on 29/10/2022.
//
#include <iostream>
#include "Circulo.h"
#include <math.h>

using namespace std;

float Circulo::calcularArea(){
    area = (3.1416)*(pow(radio, 2));
    return area;
}

float Circulo::calcularPerimetro() {
    perimetro = (3.1416)*diametro;
    return perimetro;
}

void Circulo::MostrarDatos() {
    cout<<"El perimetro es: "<<perimetro<<endl;
    cout<<"El area es: "<<area<<endl;
}