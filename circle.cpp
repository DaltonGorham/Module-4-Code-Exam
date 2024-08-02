#include "circle.h"
#include "shape.h"


Circle::Circle(Shape* inner) : Shape("Circle", inner){}


string Circle::describe(){
  return "A perfect circle surrounding a " + getInnerShape()->describe();
}