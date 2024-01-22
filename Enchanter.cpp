/*
** EPITECH PROJECT, 2024
** ppool09
** File description:
** Enchanter
*/

#include "Enchanter.hpp"

Enchanter::Enchanter(const std::string &name, int power) : Peasant(name, power) {
    talk("learns magic from his spellbook");
}

Enchanter::~Enchanter() { talk("closes his spellbook"); }

int Enchanter::attack() { return technic(0, 0, "doesn’t know how to fight"); }
int Enchanter::special() { return technic(50, 99, "casts a fireball"); }
void Enchanter::rest() { technic(-100, 0, "meditates"); }

