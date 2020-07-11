/**
 * Project Scientist Scape
 */


#ifndef _CIENTIFICO_H
#define _CIENTIFICO_H

#include "Personaje.h"


class Cientifico: public Personaje {
public: 
    
/**
 * @param tipo
 */
void lanzarExplosivo(string tipo);
    
void lanzarDinamita();
    
void colisionar();
    
void usarArma();
    
void saltar();
    
void cambiarArma();
};

#endif //_CIENTIFICO_H