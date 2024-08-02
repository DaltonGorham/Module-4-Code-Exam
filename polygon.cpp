#include "polygon.h"
#include <string>
using namespace std;

Polygon::Polygon(string n , int sides , Shape* inner): Shape(n, inner), numSides(sides){}


string Polygon::describe(){
  return "A " + to_string(getSides()) + "-sided " + getShape() + " surrounding " + getInnerShape()->describe();
}

