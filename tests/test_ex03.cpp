#include "../Priest.hpp"

#include "test.hpp"

MyTest(Priest, pdf, "bonus/out03.txt", {
    Priest priest("Trichelieu", 20);
    priest.attack();
    priest.special();
    priest.rest();
    priest.damage(50);
})
