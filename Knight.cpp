/*
** EPITECH PROJECT, 2024
** ppool09
** File description:
** Knight
*/

#include "Knight.hpp"

Knight::Knight(const std::string &name, int power)
    : ICharacter(name, power), Peasant(name, power) {
    talk("vows to protect the kingdom");
}

Knight::~Knight() { talk("takes off his armor"); }

int Knight::attack() { return technic(10, 20, "strikes with his sword"); }
int Knight::special() { return technic(30, 50, "impales his enemy"); }
void Knight::rest() { technic(-50, 0, "eats"); }
