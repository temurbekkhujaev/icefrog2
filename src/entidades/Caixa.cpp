//
// Created by temur on 7/17/2021.
//

#include "Caixa.h"
#include "../util/Util.h"


bool Caixa::temIntersecao(Conteiner conteiner) const {
    if ((x + w > conteiner.w) || (y + h > conteiner.h) || (z + d > conteiner.d)) {
        Util::appendArquivo(L"PROBLEMA: Interse��o com container", Util::NOME_ARQUIVO_LOG_PROBLEMAS);

        return true;
    }
    return false;
}


std::wstring Caixa::toString() {
    return std::__cxx11::wstring();
}

bool Caixa::temIntersecao(Caixa outraCaixa) {
    int numDimensoesCoincidentes = 0;

    // coincide em X?
    Caixa caixaComMenorX;
    Caixa caixaComMaiorX;
    if (x <= outraCaixa.x) {
        caixaComMenorX = this;
        caixaComMaiorX = outraCaixa;
    } else {
        caixaComMenorX = outraCaixa;
        caixaComMaiorX = this;
    }
    if ((caixaComMenorX.x <= caixaComMaiorX.x)
        && (caixaComMaiorX.x < (caixaComMenorX.x + caixaComMenorX.w))) {
        numDimensoesCoincidentes++;
    }
    // coincide em Y?
    Caixa caixaComMenorY;
    Caixa caixaComMaiorY;
    if (y <= outraCaixa.y) {
        caixaComMenorY = this;
        caixaComMaiorY = outraCaixa;
    } else {
        caixaComMenorY = outraCaixa;
        caixaComMaiorY = this;
    }
    if ((caixaComMenorY.y <= caixaComMaiorY.y)
        && (caixaComMaiorY.y < (caixaComMenorY.y + caixaComMenorY.h))) {
        numDimensoesCoincidentes++;
    }

    // coincide em Z?
    Caixa caixaComMenorZ;
    Caixa caixaComMaiorZ;
    if (z <= outraCaixa.z) {
        caixaComMenorZ = this;
        caixaComMaiorZ = outraCaixa;
    } else {
        caixaComMenorZ = outraCaixa;
        caixaComMaiorZ = this;
    }
    if ((caixaComMenorZ.z <= caixaComMaiorZ.z)
        && (caixaComMaiorZ.z < (caixaComMenorZ.z + caixaComMenorZ.d))) {
        numDimensoesCoincidentes++;
    }

    if (numDimensoesCoincidentes == 3) {
        Util::appendArquivo(L"PROBLEMA: Interse��o",Util::NOME_ARQUIVO_LOG_PROBLEMAS);
        Util::appendArquivo(L"\t" + this->toString(),Util::NOME_ARQUIVO_LOG_PROBLEMAS);
        Util::appendArquivo(L"\t" + outraCaixa.toString(),Util::NOME_ARQUIVO_LOG_PROBLEMAS);
        return true;
    }

    return false;
}

Caixa::Caixa(Caixa *pCaixa) {
    this =
}


Caixa::Caixa() {}
