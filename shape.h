#ifndef Shape_H
#define Shape_H
using namespace std;
#include <iostream>

class Shape{
  private:
  string name;
  Shape* innerShape;
  public:
    void setShape(string s);
    void setInnerShape(Shape* inner);
    string getShape()const {return name;};
    Shape* getInnerShape()const{return innerShape;};
    Shape();
    Shape(string s, Shape* inner);
    virtual string describe() {return "a dot.";};

};








#endif