#include "../Knight.hpp"

#include "test.hpp"

MyTest(Knight, pdf, "bonus/out01.txt", {
    Knight knight("Arthur", 20);
    knight.attack();
    knight.special();
    knight.rest();
    knight.special();
    knight.damage(50);
})
