#ifndef ZHELYKOZELITES_CPP_SZAMKOZFELEZO_H
#define ZHELYKOZELITES_CPP_SZAMKOZFELEZO_H
#include "kozelites.h"

class Szamkozfelezo : public Kozelites{
public:
    Szamkozfelezo(float d, float d1, float (*fgv)(float), float d2);
    float szamit() override;
};

#endif //ZHELYKOZELITES_CPP_SZAMKOZFELEZO_H
