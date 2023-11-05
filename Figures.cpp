#include <iostream>
using namespace std;
#include "AbstractFigure.h"
#include "Rectangle.h"
#include "Circle.h"
#include "Elipse.h"

int main() {

    Rectangle rec(3, 5);
    cout << rec;
    Rectangle rec2(0, 1);
    rec = rec2;
    cout << rec;
    
    Circle circle(3);
    cout << circle;
    cout << circle.GetArea();
    cout << endl;

    Elipse elipse(2, 3, 8);
    cout << elipse;
}