/**
 * Project Scientist Scape
 */


#ifndef _PROYECTIL_H
#define _PROYECTIL_H

class Proyectil {
public: 
    string tipo;
    QPixmap[] setPics;
    
void mover();
    
void colisionar();
};

#endif //_PROYECTIL_H