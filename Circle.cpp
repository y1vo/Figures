#include "Circle.h"
#define M_PI 3.14159265358979323846
double Circle::GetX() const {
    return x;
}
double Circle::GetY() const {
    return y;
}
double Circle::GetR() const {
    return r;
}

void Circle::SetX(double x_) {
    x = x_;
}
void Circle::SetY(double y_) {
    y = y_;
}
void Circle::SetR(double r_) {
    r = r_;
}

double Circle::GetPerimentr() const{
    return 2 * M_PI * r;
}
double Circle::GetArea() const{
    return	M_PI * r * r;
}
 Circle& Circle::operator =(const AbstractFigure& f) {
    if (&f == this) return *this;
    const Circle& circle = dynamic_cast<const Circle&> (f);
    //*this = rec;
    x = circle.x;
    y = circle.y;
    r = circle.r;
    return *this;
}

void Circle::Print(std::ostream& ost) const  {
     ost << "Circle: " << std::endl << "Point in:" << "(" << x << ", " << y << ") " << " r = " << r << std::endl;
 }