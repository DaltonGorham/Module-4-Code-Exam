#ifndef Polygon_H
#define Polygon_H
#include "shape.h"
using namespace std;


class Polygon : public Shape{
  private:
    int numSides;
  public:
    Polygon(string n = "Polygon",int sides = 0, Shape* inner = nullptr);
    string describe()override;
    int getSides()const {return numSides;};
};







#endif