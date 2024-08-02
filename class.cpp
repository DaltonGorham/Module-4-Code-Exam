#include "class.h"


Class::Class(){
  name = " ";
}

Class::Class(std::string n) : name(n){}

void Class::setName(std::string n){
  name = n;
}