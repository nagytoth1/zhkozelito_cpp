#include "szamkozfelezo.h"
#include "kozelites.h"
Szamkozfelezo::Szamkozfelezo(float d, float d1, float (*fgv)(float), float d2) : Kozelites(d, d1, fgv, d2){}

float Szamkozfelezo::szamit() {
    float a = a_m, b = b_m;
    float fa = fgv_m(a);
    if(fa * fgv_m(b) > 0){
        cout << " nincs zérushely" << endl;
        return -1.0f;
    }
    float c, fc = 1;
    while(abs(fc) > epsilon_m){
        c = (a + b) / 2;
        fc = fgv_m(c);
        cout << "a = " << a << " b = " << b << " c = " << c << " fc = " << fc << endl;
        if(fa * fc < 0)
            b = c;
        else{
            a = c;
            fa = fc;
        }
    }
    cout << "x* = " << c << endl;
    return c;
}
