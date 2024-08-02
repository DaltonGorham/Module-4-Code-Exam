#ifndef Class_H
#define Class_H
#include <iostream>

class Class{
  private:
    std::string name;
  public:
    Class();
    Class(std::string n);
    virtual void attack() = 0;
    void setName(std::string n);
    std::string getName()const{return name;};
};





#endif