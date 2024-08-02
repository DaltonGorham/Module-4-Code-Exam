#ifndef Warrior_H
#define Warrior_H
#include "class.h"



class Warrior : public Class{
  private:
    std::string weopon;
  public:
    Warrior(std::string w);
    void attack()override;
    std::string getWeopon(){return weopon;};

};






#endif