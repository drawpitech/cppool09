/*
** EPITECH PROJECT, 2024
** ppool09
** File description:
** Peasant
*/

#pragma once

#include <string>

#include "HealthPotion.hpp"
#include "IPotion.hpp"
#include "PoisonPotion.hpp"
#include "PowerPotion.hpp"

constexpr int MIN_POWER = 0;
constexpr int MAX_POWER = 100;

constexpr int MIN_HP = 0;
constexpr int MAX_HP = 100;

class ICharacter {
   public:
    ICharacter(const std::string &name, int power)
        : _name(std::move(name)), _power(power), _hp(MAX_HP){};
    virtual ~ICharacter() = default;

    [[nodiscard]] virtual const std::string &getName() const = 0;
    [[nodiscard]] virtual int getPower() const = 0;
    virtual void setPower(int power) = 0;
    [[nodiscard]] virtual int getHp() const = 0;
    virtual void setHp(int hp) = 0;

    virtual int attack() = 0;
    virtual int special() = 0;
    virtual void rest() = 0;
    virtual void damage(int damage) = 0;

    virtual void drink(const IPotion &potion) = 0;
    virtual void drink(const HealthPotion &potion) = 0;
    virtual void drink(const PoisonPotion &potion) = 0;
    virtual void drink(const PowerPotion &potion) = 0;

   protected:
    const std::string _name;
    int _power;
    int _hp;

    virtual int technic(int cost, int damage, int heal, std::string output) = 0;
    virtual void talk(std::string output) const = 0;
};
