#ifndef Circle_H
#define Circle_H
#include "shape.h"



class Circle : public Shape{
  public:
    Circle();
    Circle(Shape* inner);
    string describe()override;

};









#endif