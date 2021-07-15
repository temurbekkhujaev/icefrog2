
#ifndef ICEFROG2_UTIL_H
#define ICEFROG2_UTIL_H

#include "../entidades/TipoCaixa.h"
#include <vector>
#include <string>

class Util {
public:
    const std::string NOME_ARQUIVO_LOG_RESUMO_HB = ".\\log\\resumo_phase1.txt";

    const std::string NOME_ARQUIVO_LOG_RESUMO_GA = ".\\log\\resumo_phase2.txt";

    const std::string NOME_ARQUIVO_LOG_PROBLEMAS = ".\\log\\resumo_errors.txt";

    const std::string NOME_ARQUIVO_LOG_RESUMO_TEMP = ".\\log\\resumo_temp.txt";
    const std::string ordemCores[21] = {"[1 0 0]" /* vermelho */, "[1 0 0]" /* vermelho */,
                                        "[1 0 0]" /* vermelho */, "[0 1 0]" /* verde */, "[0 1 0]" /* verde */,
                                        "[0 1 0]" /* verde */,
                                        "[0 0 1]" /* azul */, "[0 0 1]" /* azul */, "[0 0 1]" /* azul */,
                                        "[1 1 0]" /* amarelo */,
                                        "[1 1 0]" /* amarelo */, "[0 1 0]" /* verde */, "[0 0 1]" /* azul */,
                                        "[0 0 1]" /* azul */,
                                        "[0 0 1]" /* azul */, "[1 1 0]" /* amarelo */, "[1 1 0]" /* amarelo */,
                                        "[1 1 0]" /* amarelo */,
                                        "[1 0 1]" /* rosa */, "[1 0 1]" /* rosa */, "[1 0 1]" /* rosa */
    };


    static std::vector<TipoCaixa> listTipoCaixaRotacoes(TipoCaixa tipoCaixaOriginal);

    static void appendArquivo(std::string conteudo, std::string fileName);

};

#endif //ICEFROG2_UTIL_H
