#ifndef POSTULANTE_H
#define POSTULANTE_H


#include"DatosPersona.h"

class Postulante: public DatosPersona
{
    private:
        int nOrden;
        float puntaje;
        bool ingreso;
    public:
        Postulante();
        //Postulante(char* n,char* c,char *S,char* a,char* Ca,float p);
        bool Ingresante();
        void mostrar();
        bool operator<(Postulante P);
        void asignarDatos(char* n,char* c,char *S,char* a,float p);
        float getPunt();

};

#include"Postulante.cpp"
#endif // POSTULANTE_H
