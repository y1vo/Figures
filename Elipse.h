#pragma once
#include "AbstractFigure.h"
class Elipse : public AbstractFigure {
public:

    Elipse(double a_, double b_, double r_) : a(a_), b(b_), r(r_) {}
    double GetA() const;
    double GetB() const;
    double GetR() const;
    void SetA(double a_);
    void SetB(double b_);
    void SetR(double r_);
    double GetPerimentr() const override;
    double GetArea() const override;
    virtual Elipse& operator =(const AbstractFigure& f);
private:
    double a; //параметр при x
    double b; //параметр при y
    double r;

    void Print(std::ostream& ost) const override;
};

