/*
** EPITECH PROJECT, 2024
** ppool09
** File description:
** Knight
*/

#pragma once

#include "Peasant.hpp"

class Knight : public Peasant {
   public:
    Knight(const std::string &name, int power);
    ~Knight();
    int attack();
    int special();
    void rest();
};
