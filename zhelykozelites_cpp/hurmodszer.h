#ifndef ZHELYKOZELITES_CPP_HURMODSZER_H
#define ZHELYKOZELITES_CPP_HURMODSZER_H

#include "kozelites.h"

class Hurmodszer: public Kozelites{
public:
    Hurmodszer(float d, float d1, float (*fgv)(float), float d2);

    float szamit() override;
};

#endif //ZHELYKOZELITES_CPP_HURMODSZER_H
