#include "../Peasant.hpp"

int main() {
    Peasant peasant("Gildas", 42);
    peasant.damage(50);
    peasant.damage(100);
    peasant.damage(200);
    peasant.rest();
}
