/*
** EPITECH PROJECT, 2024
** ppool09
** File description:
** IPotion
*/

#pragma once

class IPotion {
   public:
    IPotion(int power, int health) : _power(power), _health(health) {}
    virtual ~IPotion() = default;

    [[nodiscard]] virtual int getPower() const { return _power; }
    [[nodiscard]] virtual int getHealth() const { return _health; }

   private:
    int _power;
    int _health;
};
