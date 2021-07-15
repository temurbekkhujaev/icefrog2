
#ifndef ICEFROG2_PROBLEMA_H
#define ICEFROG2_PROBLEMA_H

#include "Conteiner.h"
#include "Ponto.h"
#include "TipoCaixa.h"
#include <vector>
#include <string>

class Problema {
public:
    int numProblema;
    Conteiner conteiner;
    Ponto pontoOrigemReal;
    std::vector<TipoCaixa> listTipoCaixaOriginal;

    std::vector<TipoCaixa> listTipoCaixaRotacoes();

    std::vector<TipoCaixa> clonarListTipoCaixa();

    std::string toString();
};


#endif //ICEFROG2_PROBLEMA_H
