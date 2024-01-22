/*
** EPITECH PROJECT, 2024
** ppool09
** File description:
** Paladin
*/

#include "Paladin.hpp"

Paladin::Paladin(const std::string &name, int power)
    : Peasant(name, power),
      Knight(name, power),
      Enchanter(name, power),
      Priest(name, power) {
    talk("fights for the light");
}

Paladin::~Paladin() { talk("is blessed"); }

void Paladin::talk(std::string output) const { Priest::talk(output); }

void Paladin::damage(int damage) { Priest::damage(damage); }
int Paladin::attack() { return Knight::attack(); }
int Paladin::special() { return Enchanter::special(); }
void Paladin::rest() { Priest::rest(); }
