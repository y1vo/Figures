#pragma once
#include "AbstractFigure.h"
class Circle : public AbstractFigure {
public:

    Circle(double r_) : r(r_) {}
    Circle(double x_, double y_, double r_) : x(x_), y(y_), r(r_) {}

    double GetX() const;
    double GetY() const;
    double GetR() const;

    void SetX(double x_);
    void SetY(double y_);
    void SetR(double r_);

    double GetPerimentr() const override;
    double GetArea() const override;
    virtual Circle& operator =(const AbstractFigure& f);
private:
    double x{ 0 }; // центр в точке
    double y{ 0 };
    double r; //радиус

    void Print(std::ostream& ost) const override;
};

