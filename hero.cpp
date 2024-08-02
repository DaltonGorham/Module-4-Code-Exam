#include "hero.h"



Hero::Hero(){}

Hero::Hero(std::string n, Class* classN) : name(n), className(classN){}


void Hero::setName(std::string n){
  name = n;
}

void Hero::setClassName(Class* classN){
  className = classN;
}

void Hero::act(){
  std::cout << getName() << ", "; getClassName()->attack();
}



