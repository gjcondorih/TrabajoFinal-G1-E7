#ifndef POSTULANTE_H
#define POSTULANTE_H

#include"DatosPersona.h"

class Postulante: public DatosPersona
{
    private:
        int nOrden;
        char apellidos[25];
        char carrera[20]; // No se si poner apuntador o normalito
        float puntaje;
        bool ingreso;
    public:
        Postulante();
        Postulante(char n[],char c[],char a[],char Ca[],float p,int nO);
        bool Ingresante();

};

#endif // POSTULANTE_H
