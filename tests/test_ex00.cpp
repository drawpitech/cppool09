#include "../Peasant.hpp"
#include "test.hpp"

MyTest(Peasant, pdf, "bonus/out00.txt", {
    Peasant peasant("Gildas", 42);
    peasant.damage(50);
    peasant.damage(100);
    peasant.damage(200);
    peasant.rest();
});
