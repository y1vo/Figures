#pragma once
#include <iostream>
class AbstractFigure {
public:
    virtual ~AbstractFigure() = default;

    virtual double GetPerimentr() const = 0;

    virtual double GetArea() const = 0;

    virtual AbstractFigure& operator=(const AbstractFigure& f) = 0;

    friend std::ostream& operator<<(std::ostream& os, const AbstractFigure& figure) {
        figure.Print(os);
        return os;
    }

private:
    virtual void Print(std::ostream& ost) const = 0;
};
inline AbstractFigure& AbstractFigure::operator=(const AbstractFigure& f) = default;
