
#include "TipoCaixa.h"



TipoCaixa::TipoCaixa(int w, int h, int d, TipoCaixa tipoCaixaOriginal) : w(w), h(h), d(d), tipoCaixaOriginal(tipoCaixaOriginal) {
    // something can be wrong with this constructor
    coeficienteRelevancia = tipoCaixaOriginal.coeficienteRelevancia;
    cor = tipoCaixaOriginal.cor;
    peso = tipoCaixaOriginal.peso;
}
