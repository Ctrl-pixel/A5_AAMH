//
// Created by oviwa on 29/10/2022.
//

#ifndef A5_AAMH_CUADRADO_H
#define A5_AAMH_CUADRADO_H


class Cuadrado{
//Attributes
private:
    float lado1, lado2;
    float perimetro, area;
//Methods
public:
    Cuadrado(float lado1, float lado2){
        this->lado1 = lado1;
        this->lado2 = lado2;
    }

    float calcularArea();
    float calcularPerimetro();
    void MostrarDatos();
};


#endif //A5_AAMH_CUADRADO_H
