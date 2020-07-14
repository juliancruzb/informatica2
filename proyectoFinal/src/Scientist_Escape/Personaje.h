/**
 * Project Scientist Scape
 */


#ifndef _PERSONAJE_H
#define _PERSONAJE_H

class Personaje {
public: 
    string nombre;
    int nivelVida;
    QPixmap[][] setPics;
    Arma arma;
    double velocidad;
    int ubicacion;
    
/**
 * @param direccion
 */
void mover(int direccion);
    
/**
 * @param nombre
 */
void setNombre(string nombre);
    
/**
 * @param cantidad
 */
void updateVida(int cantidad);
};

#endif //_PERSONAJE_H