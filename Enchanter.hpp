/*
** EPITECH PROJECT, 2024
** ppool09
** File description:
** Enchanter
*/

#pragma once

#include "Peasant.hpp"

class Enchanter : public Peasant {
   public:
    Enchanter(const std::string &name, int power);
    ~Enchanter();
    int attack();
    int special();
    void rest();
};
