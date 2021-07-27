
#include "TipoCaixa.h"



TipoCaixa::TipoCaixa(int w, int h, int d, TipoCaixa _tipoCaixaOriginal) : w(w), h(h), d(d) {
    // something can be wrong with this constructor
//    tipoCaixaOriginal = _tipoCaixaOriginal;
    coeficienteRelevancia = tipoCaixaOriginal->coeficienteRelevancia;
    cor = tipoCaixaOriginal->cor;
    peso = tipoCaixaOriginal->peso;
}

TipoCaixa::TipoCaixa() {}
