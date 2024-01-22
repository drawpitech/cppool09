#include "../Paladin.hpp"

#include "test.hpp"

MyTest(Paladin, pdf, "bonus/out04.txt", {
    Paladin paladin("Uther", 99);
    paladin.attack();
    paladin.special();
    paladin.rest();
    paladin.damage(50);
})
