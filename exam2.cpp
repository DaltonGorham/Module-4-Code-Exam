#include "mage.cpp"
#include "class.cpp"
#include "warrior.cpp"
#include "hero.cpp"
#include "shape.cpp"
#include "circle.cpp"
#include "polygon.cpp"
using namespace std;



int main(){
  srand(time(0));
  cout << "CLASS PROBLEM:" << endl;
  Class* classNames[2];
  classNames[0] = new Mage();
  classNames[1] = new Warrior("Mace");

  Hero hero1("Luke Skywalker",classNames[0]);

  Hero hero2("Percy Jackson", classNames[1]);

  hero1.act();
  hero2.act();

  cout << endl << endl;

  cout << "SHAPE PROBLEM: " << endl;

  Shape* dot = new Shape();
  Shape* dot2 = new Shape();

  Shape* circle1 = new Polygon("Circle", 0, dot);

  Shape* circle2 = new Polygon("Circle", 0, circle1);

  Shape* sqaure = new Polygon("Square", 4, circle2);

  Shape* circle = new Polygon("Cirlce", 0, dot2);

  Shape* triangle = new Polygon("Triangle", 3, circle);

  Shape* sqaure2 = new Polygon("Square", 4, triangle);

  Shape* pentagon = new Polygon("Pentagon", 5, sqaure2);


  cout << sqaure->describe() << endl;
  cout << pentagon->describe() << endl;

  

  
 




  return 0;
}