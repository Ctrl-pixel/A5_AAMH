//
// Created by oviwa on 29/10/2022.
//

#ifndef A5_AAMH_CIRCULO_H
#define A5_AAMH_CIRCULO_H


class Circulo{
//Attributes
private:
    float radio, diametro, area, perimetro;
//Methods
public:
    Circulo(float radio, float diametro){
        this->radio = radio;
        this->diametro = diametro;
    }

    float calcularArea();
    float calcularPerimetro();
    void MostrarDatos();
};


#endif //A5_AAMH_CIRCULO_H
