#ifndef ZHELYKOZELITES_CPP_KOZELITES_H
#define ZHELYKOZELITES_CPP_KOZELITES_H
#include <iostream>
using namespace std;


class Kozelites {
public:
    Kozelites(float, float, float(*fgv)(float), float);
    virtual float szamit() = 0; //x*-gal fog visszatérni, ami a zérushelynek közelítő értéke
protected:
    float a_m, b_m;
    float (*fgv_m)(float);
    float epsilon_m;
};


#endif //ZHELYKOZELITES_CPP_KOZELITES_H
