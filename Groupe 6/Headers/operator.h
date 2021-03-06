#ifndef OPERATOR_H
#define OPERATOR_H


#include <string>
#include "expression.h"

using namespace std;

class Operator: public Expression
{
protected:
    Expression *_lOpPt, *_rOpPt;
    string _operator;
public:
    Operator();

    bool operable();
    bool calculable() override;
    void displayN(ostringstream &stream) override;
    void displayPin(ostringstream &stream) override;
};

//French translation
typedef Operator Operateur;

#endif // OPERATOR_H
