/*
** EPITECH PROJECT, 2024
** ppool09
** File description:
** IPotion
*/

#pragma once

class IPotion {
   public:
    IPotion(int power, int health);

    [[nodiscard]] int getPower() const;
    [[nodiscard]] int getHealth() const;

   private:
    int _power;
    int _health;
};
