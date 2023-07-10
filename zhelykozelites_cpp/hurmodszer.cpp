//
// Created by bence on 2023.07.10..
//

#include "hurmodszer.h"

Hurmodszer::Hurmodszer(float d, float d1, float (*fgv)(float), float d2) : Kozelites(d, d1, fgv, d2) {}

float Hurmodszer::szamit() {
    float a = a_m, b = b_m;
    float fa = fgv_m(a), fb = fgv_m(b);
    if(fa * fb > 0){
        cout << " nincs zérushely" << endl;
        return -1.0f;
    }

    float c, fc = 1;
    while(abs(fc) > epsilon_m){
        c = a - fa * (a - b) / (fa - fb);
        fc = fgv_m(c);
        cout << "a = " << a << " b = " << b << " c = " << c << " fc = " << fc << endl;
        if(fa * fc < 0){
            b = c;
            fb = fc;
        }
        else{
            a = c;
            fa = fc;
        }
    }
    return c;
}
