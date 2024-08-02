#include "shape.h"
using namespace std;

Shape::Shape() : name("Dot"), innerShape(nullptr){}

Shape::Shape(string s, Shape* inner) : name(s), innerShape(inner){}

void Shape::setShape(string s){
  name = s;
}

void Shape::setInnerShape(Shape* inner){
  innerShape = inner;
}

