
#ifndef ICEFROG2_TIPOCAIXA_H
#define ICEFROG2_TIPOCAIXA_H

#include <string>

class TipoCaixa {
public:
    int w, h, d;

    TipoCaixa(int w, int h, int d, TipoCaixa tipoCaixaOriginal);

    TipoCaixa tipoCaixaOriginal;

    std::string cor = "[0 1 1]" /* anil = cor default */;
    double peso = -100;

private:
    int quantidadeDisponivel = -1;
    int coeficienteRelevancia = -1;

};


#endif //ICEFROG2_TIPOCAIXA_H
