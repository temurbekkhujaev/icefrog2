//
// Created by temur on 7/17/2021.
//

#ifndef ICEFROG2_CAIXA_H
#define ICEFROG2_CAIXA_H

#include "Conteiner.h"
#include <string>

class Caixa {
public:
    int x = -1;
    int y = -1;
    int z = -1;

    int w;
    int h;
    int d;
    int idCaixa;
    static int CONTADOR_CAIXA;
    std::string toString();
    bool temIntersecao(Conteiner conteiner);
};


#endif //ICEFROG2_CAIXA_H
