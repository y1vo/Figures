#pragma once
#include "AbstractFigure.h"
class Rectangle : public AbstractFigure {
public:
    Rectangle(double a_, double b_) : a(a_), b(b_) {}

    double GetA() const;
    double GetB() const;

    void SetA(double a_);
    void SetB(double b_);

    double GetPerimentr() const override;
    double GetArea() const override;

    Rectangle& operator=(const AbstractFigure& f) override;
private:
    double a; //высота
    double b; //ширина

    void Print(std::ostream& ost) const override;

};