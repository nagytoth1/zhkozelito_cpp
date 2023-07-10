#ifndef ZHELYKOZELITES_CPP_SZELOMODSZER_H
#define ZHELYKOZELITES_CPP_SZELOMODSZER_H


#include "kozelites.h"

class Szelomodszer : public Kozelites{

public:
    Szelomodszer(float d, float d1, float (*fgv)(float), float d2);

    float szamit() override;
};


#endif //ZHELYKOZELITES_CPP_SZELOMODSZER_H
