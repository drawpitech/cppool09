#include <iostream>

#include "../HealthPotion.hpp"
#include "../ICharacter.hpp"
#include "../IPotion.hpp"
#include "../Peasant.hpp"
#include "../PoisonPotion.hpp"
#include "../PowerPotion.hpp"

int main() {
    ICharacter* peasant = new Peasant("Gildas", 42);
    PoisonPotion poison_potion;
    HealthPotion health_potion;
    IPotion& potion = health_potion;
    std::cout << peasant->getName() << ": " << peasant->getHp() << "HP, "
              << peasant->getPower() << " PP." << std ::endl;
    peasant->drink(poison_potion);
    std::cout << peasant->getName() << ": " << peasant->getHp() << "HP, "
              << peasant->getPower() << " PP." << std ::endl;
    peasant->drink(potion);
    std::cout << peasant->getName() << ": " << peasant->getHp() << "HP, "
              << peasant->getPower() << " PP." << std ::endl;
    delete peasant;
}
