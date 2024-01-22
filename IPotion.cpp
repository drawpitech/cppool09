/*
** EPITECH PROJECT, 2024
** ppool09
** File description:
** IPotion
*/

#include "IPotion.hpp"

IPotion::IPotion(int power, int health) : _power(power), _health(health) {}

int IPotion::getPower() const { return _power; }
int IPotion::getHealth() const { return _health; }
