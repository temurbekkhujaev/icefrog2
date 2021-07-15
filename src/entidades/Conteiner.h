
#ifndef ICEFROG2_CONTEINER_H
#define ICEFROG2_CONTEINER_H

#include <string>
#include "PontoFlutuante.h"

class Conteiner {
public:
    int w;
    int h;
    int d;

    Conteiner(int w, int h, int d);

    int volume();//!BIGINT
    std::string toString() ;

    PontoFlutuante getCentroGeometrico() const;
};


#endif //ICEFROG2_CONTEINER_H
