#include "../Knight.hpp"

int main() {
    Knight knight("Arthur", 20);
    knight.attack();
    knight.special();
    knight.rest();
    knight.special();
    knight.damage(50);
}
