#include <iostream>
#include "szamkozfelezo.h"
#include "hurmodszer.h"
#include "szelomodszer.h"

float fgv(float x){
    return x * x - 4 * x - 5;
}
int main() {
    //Kozelites* koz = new Hurmodszer(0, 10, fgv, 0.0001);
    //Kozelites* koz = new Hurmodszer(0, 10, fgv, 0.0001);
    Kozelites* koz = new Szelomodszer(2, 10, fgv, 0.0001);
    koz->szamit();
    return 0;
}
