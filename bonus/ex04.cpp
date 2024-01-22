#include "../Paladin.hpp"

int main() {
    Paladin paladin("Uther", 99);
    paladin.attack();
    paladin.special();
    paladin.rest();
    paladin.damage(50);
}
