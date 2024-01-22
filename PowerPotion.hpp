/*
** EPITECH PROJECT, 2024
** ppool09
** File description:
** HealthPotion
*/

#pragma once

#include "IPotion.hpp"

class PowerPotion : public IPotion {
   public:
    PowerPotion() : IPotion(50, 0) {}
};
