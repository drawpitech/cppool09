/*
** EPITECH PROJECT, 2024
** ppool09
** File description:
** Peasant
*/

#pragma once

#include <string>

constexpr int MIN_POWER = 0;
constexpr int MAX_POWER = 100;

constexpr int MIN_HP = 0;
constexpr int MAX_HP = 100;

class Peasant {
   public:
    Peasant(const std::string &name, int power);
    ~Peasant();

    [[nodiscard]] const std::string &getName() const;
    [[nodiscard]] int getPower() const;
    void setPower(int power);
    [[nodiscard]] int getHp() const;
    void setHp(int hp);

    virtual int attack();
    virtual int special();
    virtual void rest();
    virtual void damage(int damage);

   protected:
    const std::string _name;
    int _power;
    int _hp;

    int technic(int cost, int damage, std::string output);
    virtual void talk(std::string output) const;
};
