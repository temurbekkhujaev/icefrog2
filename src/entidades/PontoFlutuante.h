
#ifndef ICEFROG2_PONTOFLUTUANTE_H
#define ICEFROG2_PONTOFLUTUANTE_H

#include <string>

class PontoFlutuante {
public:
    double x, y, z;

    PontoFlutuante(double x, double y, double z);

    std::string toString();

    double calculaDistancia(PontoFlutuante outroPonto) const;
};


#endif //ICEFROG2_PONTOFLUTUANTE_H
