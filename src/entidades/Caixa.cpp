//
// Created by temur on 7/17/2021.
//

#include "Caixa.h"
#include "../util/Util.h"

std::string Caixa::toString() {
    // TODO
    return std::__cxx11::string();
}

bool Caixa::temIntersecao(Conteiner conteiner) {
    if ((x + w > conteiner.w) || (y + h > conteiner.h) || (z + d > conteiner.d)) {
        Util::appendArquivo("PROBLEMA: Interse��o com container", Util::NOME_ARQUIVO_LOG_PROBLEMAS);
        return true;
    }
    return false;
}
