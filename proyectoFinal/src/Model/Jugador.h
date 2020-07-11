/**
 * Project Scientist Scape
 */


#ifndef _JUGADOR_H
#define _JUGADOR_H

class Jugador {
public: 
    int id;
    string usuario;
    string clave;
    double puntaje;
    double distancia;
    int numNivel;
    
void guardar();
};

#endif //_JUGADOR_H