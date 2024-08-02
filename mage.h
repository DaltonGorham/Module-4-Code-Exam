#ifndef Mage_H
#define Mage_H
#include "class.h"
#include <vector>

class Mage : public Class{
  private:
    std::vector<std::string> spellBook = {"Fire Blast", "Deep Freeze", "Scarlet Rot"};
  public:
    Mage();
    void castSpell(std::string spell);
    void attack()override;
    std::string pickSpell();

};








#endif