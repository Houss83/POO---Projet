#include "../Headers/sum.h"

#include <iostream>

using namespace std;

Sum::Sum()
{
    _operator = "+";
}

Sum::Sum(Expression *lOpPt, Expression *rOpPt)
{
    _lOpPt = lOpPt;
    _rOpPt = rOpPt;
    _operator = "+";
    _assignements = new list<Assignement *>;
}

Sum::Sum(list<Assignement *> *assignements, Expression *lOpPt, Expression *rOpPt)
{
    _lOpPt = lOpPt;
    _rOpPt = rOpPt;
    _operator = "+";
    _assignements = assignements;
}

float Sum::calculate()
{
    if(calculable())
        return _lOpPt -> calculate() + _rOpPt -> calculate();
    else
    {
        // << "calculation error";
        return 0.0;
    }
}
