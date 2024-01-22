/*
** EPITECH PROJECT, 2024
** ppool09
** File description:
** Enchanter
*/

#pragma once

#include "Peasant.hpp"

class Enchanter : public virtual Peasant {
   public:
    Enchanter(const std::string &name, int power);
    ~Enchanter();
    int attack() override;
    int special() override;
    void rest() override;
};
