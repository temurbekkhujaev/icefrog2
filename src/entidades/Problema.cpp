
#include "Problema.h"
#include "../util/Util.h"

std::vector<TipoCaixa> Problema::listTipoCaixaRotacoes() {
    std::vector<TipoCaixa> listTipoCaixaRotacoes;
    for (TipoCaixa tipoCaixaOriginal : listTipoCaixaOriginal) {
        for (TipoCaixa element: (Util::listTipoCaixaRotacoes(tipoCaixaOriginal))) {
            listTipoCaixaRotacoes.push_back(element);
        }
    }
    return listTipoCaixaRotacoes;
}

std::vector<TipoCaixa> Problema::clonarListTipoCaixa() {

    std::vector<TipoCaixa> listaClone;

    for (TipoCaixa tipoOriginal : listTipoCaixaOriginal) {
        listaClone.push_back(tipoOriginal);
    }
    return listaClone;
}

std::string Problema::toString() {
    return "Problema " + std::to_string(numProblema) + "; Origem: "
           + pontoOrigemReal.toString() + conteiner.toString();
}
