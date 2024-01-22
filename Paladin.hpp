/*
** EPITECH PROJECT, 2024
** ppool09
** File description:
** Paladin
*/

#pragma once

#include "Knight.hpp"
#include "Priest.hpp"

class Paladin : public virtual Knight, public virtual Priest {
   public:
    Paladin(const std::string &name, int power);
    ~Paladin() override;

    int attack() override;
    int special() override;
    void rest() override;
    void damage(int damage) override;

   protected:
    void talk(std::string output) const override;
};
