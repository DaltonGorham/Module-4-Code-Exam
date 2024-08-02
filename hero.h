#ifndef Hero_H
#define Hero_H
#include "class.h"

class Hero{
  private:
    std::string name;
    Class* className;
  public:
    Hero();
    Hero(std::string n, Class* classN);
    void setName(std::string n);
    void setClassName(Class* classN);
    std::string getName(){return name;}
    Class* getClassName(){
      return className;
    }
    void act();
    
};








#endif