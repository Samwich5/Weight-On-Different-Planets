#include <iostream>
/*
Mario has to do a lot of travelling since he is a well known Super Smash Bros. fighter.
Since he is visiting the solar system he needs to know what is weight will
be on each of the planets so he can prepare to battle his oppenents.
I have created this program that will tell Mario his weight on all the planets
in the Solar System. Note that Pluto is NOT included.
*/
int main() {

  double weight = 0;

  std::cout << "Type your weight on Earth (pounds): \n";
  std::cin >> weight;

  int planet = 0;

  std::cout << "Which planet do you plan to fight on (enter a number)? \n";
  std::cin >> planet;

  switch (planet) {
    case 1 :
      std::cout << "Your weight on Mercury is: \n" << weight * 0.38 << " pounds. Good luck!\n";
      break;

    case 2 :
      std::cout << "You weight on Venus is: \n" << weight * 0.78 << " pounds. Good luck!\n";
      break;

    case 3 :
      std::cout << "Your weight on Earth is: \n" << weight << " pounds. Good luck!\n";
      break;

    case 4 :
      std::cout << "You weight on Mars is: \n" << weight * 0.39 << " pounds. Good luck!\n";
      break;

    case 5 :
      std::cout << "Your weight on Jupiter is: \n" << weight * 2.65 << " pounds. Good luck!\n";
      break;

    case 6 :
      std::cout << "Your weight on Saturn is: \n" << weight * 1.17 << " pounds. Good luck!\n";
      break;

    case 7 :
      std::cout << "Your weight on Uranus is: \n" << weight * 1.05 << " pounds. Good luck!\n";
      break;

    case 8 :
      std::cout << "Your weight on Neptune is: \n" << weight * 1.23 << " pounds.Good luck!\n";
      break;

    default :
      std::cout << "Please type the number of planet.\n";
      break;
  }
}
