#include "../Enchanter.hpp"

#include "test.hpp"

MyTest(Enchanter, pdf, "bonus/out02.txt", {
    Enchanter enchanter("Merlin", 20);
    enchanter.attack();
    enchanter.special();
    enchanter.rest();
    enchanter.special();
    enchanter.damage(50);
})
