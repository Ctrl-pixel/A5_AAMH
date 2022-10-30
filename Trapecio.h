//
// Created by oviwa on 29/10/2022.
//

#ifndef A5_AAMH_TRAPECIO_H
#define A5_AAMH_TRAPECIO_H


class Trapecio{
//Attributes
private:
    float baseMenor, BaseMayor, altura, lado;
    float area, perimetro;
//Methods
public:
    Trapecio( float baseMenor, float BaseMayor, float altura, float lado){
        this->altura = altura;
        this->BaseMayor = BaseMayor;
        this->baseMenor = baseMenor;
        this->lado = lado;

    }

    float calcularArea();
    float calcularPerimetro();
    void MostrarDatos();

};


#endif //A5_AAMH_TRAPECIO_H
