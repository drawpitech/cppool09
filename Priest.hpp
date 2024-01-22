/*
** EPITECH PROJECT, 2024
** ppool09
** File description:
** Priest
*/

#pragma once

#include "Enchanter.hpp"

class Priest : public virtual Enchanter {
   public:
    Priest(const std::string &name, int power);
    ~Priest() override;
    void rest() override;
};
