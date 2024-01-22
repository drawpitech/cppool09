#include "../Priest.hpp"

int main() {
    Priest priest("Trichelieu", 20);
    priest.attack();
    priest.special();
    priest.rest();
    priest.damage(50);
}
