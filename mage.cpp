#include "mage.h"
#include <ctime>


Mage::Mage() : Class("Mage"){}


void Mage::castSpell(std::string spell){
  std::cout << "Casts a " << spell << std::endl;
}


std::string Mage::pickSpell(){
  int randomSpell = rand() % 3;
 std::string spell =  spellBook[randomSpell];
 return spell;
}

void Mage::attack(){
  std::cout << "The mage casted " << pickSpell() << std::endl;
}

