#include "szelomodszer.h"

Szelomodszer::Szelomodszer(float d, float d1, float (*fgv)(float), float d2) : Kozelites(d, d1, fgv, d2) {}

float Szelomodszer::szamit() {
    float xelo = a_m, xakt = b_m;
    float fxelo = fgv_m(xelo), fxakt = fgv_m(xakt);
    if(fxelo * fxakt > 0){
        cout << " nincs zérushely" << endl;
        return -1.0f;
    }

    float xkov, fxkov = 1;
    while(abs(fxkov) > epsilon_m){
        xkov = xakt - fxakt * (xakt - xelo) / (fxakt - fxelo);
        fxkov = fgv_m(xkov);
        xelo = xakt;
        fxelo = fxakt;
        xakt = xkov;
        fxakt = fxkov;
        cout << "x_n = " << xkov << " f(x_n) = " << fxkov << endl;
    }
    return xkov;
}
