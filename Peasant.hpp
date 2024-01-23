/*
** EPITECH PROJECT, 2024
** ppool09
** File description:
** Peasant
*/

#pragma once

#include <string>

#include "ICharacter.hpp"

class Peasant : public virtual ICharacter {
   public:
    Peasant(const std::string &name, int power);
    ~Peasant() override;

    [[nodiscard]] const std::string &getName() const override;
    [[nodiscard]] int getPower() const override;
    void setPower(int power) override;
    [[nodiscard]] int getHp() const override;
    void setHp(int hp) override;

    int attack() override;
    int special() override;
    void rest() override;
    void damage(int damage) override;

    void drink(const IPotion &potion) override;
    void drink(const HealthPotion &potion) override;
    void drink(const PoisonPotion &potion) override;
    void drink(const PowerPotion &potion) override;

   protected:
    int technic(int cost, int damage, int heal, std::string output) override;
    void talk(std::string output) const override;
};
