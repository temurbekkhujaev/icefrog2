#ifndef ICEFROG2_PONTO_H
#define ICEFROG2_PONTO_H

#include <string>

class Ponto {

public:
    int x;
    int y;
    int z;


    Ponto(int x, int y, int z);
    std::string toString();
};


#endif //ICEFROG2_PONTO_H
