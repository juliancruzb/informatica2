/**
 * Project Scientist Scape
 */


#ifndef _EXPLOSIVO_H
#define _EXPLOSIVO_H

class Explosivo {
public: 
    string tipo;
    QPixmap[][] setPics;
    double velocidadX;
    double velocidadY;
    static double aceleracionX;
    static double aceleracionY;
};

#endif //_EXPLOSIVO_H