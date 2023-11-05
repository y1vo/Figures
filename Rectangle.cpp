#include "Rectangle.h"
#include "AbstractFigure.h"
double Rectangle:: GetA() const {
    return a;
}

void Rectangle:: SetA(double a_) {
    a = a_;
}

void Rectangle:: SetB(double b_) {
    b = b_;
}

double Rectangle:: GetB() const {
    return b;
}

double Rectangle:: GetPerimentr() const {
    return a * 2 + b * 2;
}

double Rectangle:: GetArea() const {
    return a * b;
}

Rectangle& Rectangle:: operator=(const AbstractFigure& f) {
    if (&f == this) return *this;
    const auto& rec = dynamic_cast<const Rectangle&> (f);
    a = rec.a;
    b = rec.b;
    return *this;
}

void Rectangle::Print(std::ostream& ost) const {
    ost << "Rectangle: " << std::endl << "height:" << a << " " << "width:" << b << std::endl;
}