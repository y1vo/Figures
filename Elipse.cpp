#include "Elipse.h"
#define M_PI 3.14159265358979323846
double Elipse::GetA()const {
    return a;
}
double Elipse::GetB()const {
    return b;
}
double Elipse::GetR()const {
    return r;
}
void Elipse::SetA(double a_) {
    a = a_;
}
void Elipse::SetB(double b_) {
    b = b_;
}
void Elipse::SetR(double r_) {
    r = r_;
}
double Elipse::GetPerimentr() const {
    return (4 * (M_PI * a * b + (a - b) * (a - b)) / (a + b));
}
double Elipse::GetArea() const {
    return M_PI * a * b;
}

Elipse& Elipse::operator =(const AbstractFigure& f) {
    if (&f == this) return *this;
    const Elipse& elipse = dynamic_cast<const Elipse&> (f);
    //*this = rec;
    a = elipse.a;
    b = elipse.b;
    r = elipse.r;
    return *this;
}

void Elipse::Print(std::ostream & ost) const {
     ost << "Elipse: " << std::endl << "Parameters:" << "(" << a << ", " << b << ") " << " r=" << r << std::endl;
 }