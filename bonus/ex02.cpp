#include "../Enchanter.hpp"

int main() {
    Enchanter enchanter("Merlin", 20);
    enchanter.attack();
    enchanter.special();
    enchanter.rest();
    enchanter.special();
    enchanter.damage(50);
}
