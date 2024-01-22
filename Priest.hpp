/*
** EPITECH PROJECT, 2024
** ppool09
** File description:
** Priest
*/

#pragma once

#include "Enchanter.hpp"

class Priest : public Enchanter {
   public:
    Priest(const std::string &name, int power);
    ~Priest();
    void rest();
};
