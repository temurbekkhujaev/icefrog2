
#ifndef ICEFROG2_UTIL_H
#define ICEFROG2_UTIL_H

#include "../entidades/TipoCaixa.h"
#include <vector>
#include <string>

class Util {
public:
    static const std::wstring NOME_ARQUIVO_LOG_RESUMO_HB;

    static const std::wstring NOME_ARQUIVO_LOG_RESUMO_GA;

    static const std::wstring NOME_ARQUIVO_LOG_PROBLEMAS;

    static const std::wstring NOME_ARQUIVO_LOG_RESUMO_TEMP;

    const std::wstring ordemCores[21] = {L"[1 0 0]" /* vermelho */, L"[1 0 0]" /* vermelho */,
                                         L"[1 0 0]" /* vermelho */, L"[0 1 0]" /* verde */, L"[0 1 0]" /* verde */,
                                         L"[0 1 0]" /* verde */,
                                         L"[0 0 1]" /* azul */, L"[0 0 1]" /* azul */, L"[0 0 1]" /* azul */,
                                         L"[1 1 0]" /* amarelo */,
                                         L"[1 1 0]" /* amarelo */, L"[0 1 0]" /* verde */, L"[0 0 1]" /* azul */,
                                         L"[0 0 1]" /* azul */,
                                         L"[0 0 1]" /* azul */, L"[1 1 0]" /* amarelo */, L"[1 1 0]" /* amarelo */,
                                         L"[1 1 0]" /* amarelo */,
                                         L"[1 0 1]" /* rosa */, L"[1 0 1]" /* rosa */, L"[1 0 1]" /* rosa */
    };


    static std::vector<TipoCaixa> listTipoCaixaRotacoes(TipoCaixa tipoCaixaOriginal);

    static void appendArquivo(std::wstring conteudo, std::wstring fileName);


};

#endif //ICEFROG2_UTIL_H
