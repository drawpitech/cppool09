/*
** EPITECH PROJECT, 2024
** ppool09
** File description:
** Peasant
*/

#include "Peasant.hpp"

#include <algorithm>
#include <iostream>

Peasant::Peasant(const std::string &name, int power) : ICharacter(name, power) {
    talk("goes for an adventure");
}

Peasant::~Peasant() { talk("is back to his crops"); }

const std::string &Peasant::getName() const { return _name; }

int Peasant::getPower() const { return _power; }
void Peasant::setPower(int power) {
    _power = std::clamp(power, MIN_POWER, MAX_POWER);
}

int Peasant::getHp() const { return _hp; }
void Peasant::setHp(int hp) { _hp = std::clamp(hp, MIN_HP, MAX_HP); }

void Peasant::talk(std::string output) const {
    std::cout << _name << " " << output << ".\n";
}

int Peasant::technic(int cost, int damage, int heal, std::string output) {
    if (_hp == 0) {
        talk("is out of combat");
        return 0;
    }
    if (_power < cost) {
        talk("is out of power");
        return 0;
    }
    talk(std::move(output));
    setPower(_power - cost);
    setHp(_hp + heal);
    return damage;
}

int Peasant::attack() { return technic(10, 5, 0, "tosses a stone"); }
int Peasant::special() {
    return technic(0, 0, 0, "doesn't know any special move");
}
void Peasant::rest() { technic(-30, 0, 0, "takes a nap"); }

void Peasant::damage(int damage) {
    setHp(_hp - damage);
    talk(
        (_hp == MIN_HP) ? "is out of combat"
                        : "takes " + std::to_string(damage) + " damage");
}

void Peasant::drink(const IPotion &potion) {
    setHp(_hp + potion.getHealth());
    setPower(_power + potion.getPower());
    talk("drinks a mysterious potion");
}

void Peasant::drink(const HealthPotion &potion) {
    setHp(_hp + potion.getHealth());
    setPower(_power + potion.getPower());
    talk("feels rejuvenated");
}

void Peasant::drink(const PoisonPotion &potion) {
    setHp(_hp + potion.getHealth());
    setPower(_power + potion.getPower());
    talk("has been poisoned");
}

void Peasant::drink(const PowerPotion &potion) {
    setHp(_hp + potion.getHealth());
    setPower(_power + potion.getPower());
    std::cout << _name << "'s power is restored.\n";
}
