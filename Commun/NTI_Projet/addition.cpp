#include "addition.h"
#include <iostream>

using namespace std;

addition::addition(){
    _operateur = "+";
}

addition::addition(expression *x, expression *y){

    _opG = x;
    _opD = y;
}

void addition::afficherClassique(ostream &reference){

    _opG->afficherClassique(reference);
    reference<< "+" <<endl;
    _opD->afficherClassique(reference);
}

void addition::afficherPolonaise(ostream &reference){

    _opG->afficherClassique(reference);
    _opD->afficherClassique(reference);
    reference<< "+" <<endl;
}

float addition::calculer(){

    return _opG->calculer() + _opD->calculer();
}
