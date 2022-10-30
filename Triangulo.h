//
// Created by oviwa on 29/10/2022.
//

#ifndef A5_AAMH_TRIANGULO_H
#define A5_AAMH_TRIANGULO_H


class Triangulo{
//Attributes
private:
    float l1, l2, l3;
    float base, altura;
    float area, perimetro;
//Methods
public:
    Triangulo(float l1, float l2, float l3, float base, float altura){
        this->l1 = l1;
        this->l2 = l2;
        this->l3 = l3;
        this->base = base;
        this->altura = altura;
    }

    float calcularArea();
    float calcularPerimetro();
    void MostrarDatos();
};



#endif //A5_AAMH_TRIANGULO_H
