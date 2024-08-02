#include "warrior.h"


Warrior::Warrior(std::string w) : Class("Warrior") , weopon(w) {}



void Warrior::attack(){
  std::cout << "The Warrior swings their " << getWeopon();
}

