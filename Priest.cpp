/*
** EPITECH PROJECT, 2024
** ppool09
** File description:
** Priest
*/

#include "Priest.hpp"

Priest::Priest(const std::string &name, int power)
    : ICharacter(name, power), Peasant(name, power), Enchanter(name, power) {
    talk("enters in the order");
}

Priest::~Priest() { talk("finds peace"); }

void Priest::rest() {
    technic(-100, 0, 100, "prays");
}
