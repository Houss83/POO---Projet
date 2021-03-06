#ifndef CONSTANTE_H
#define CONSTANTE_H

#include "expression.h"
using namespace std;

class constante : public expression{

public :
    constante();
    constante(float x=0);
    float calculer();
    void afficherClassique(ostream &reference);
    void afficherPolonaise(ostream &reference);

protected:
    float _valeur;
};


#endif // CONSTANTE_H
