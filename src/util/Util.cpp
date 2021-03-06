//
// Created by temur on 7/17/2021.
//

#include "Util.h"
#include <iostream>

const std::wstring Util::NOME_ARQUIVO_LOG_RESUMO_HB = L".\\log\\resumo_phase1.txt";

const std::wstring Util::NOME_ARQUIVO_LOG_RESUMO_GA = L".\\log\\resumo_phase2.txt";

const std::wstring Util::NOME_ARQUIVO_LOG_PROBLEMAS = L".\\log\\resumo_errors.txt";

const std::wstring Util::NOME_ARQUIVO_LOG_RESUMO_TEMP = L".\\log\\resumo_temp.txt";

std::vector<TipoCaixa> Util::listTipoCaixaRotacoes(TipoCaixa tipoCaixaOriginal) {

    std::vector<TipoCaixa> listTipoCaixaRotacoes;

    // TODO verificar quais as rota��es que n�o s�o PERMITIDAS, na carga do
    // problema.
    int a = tipoCaixaOriginal.w;
    int b = tipoCaixaOriginal.h;
    int c = tipoCaixaOriginal.d;

    TipoCaixa novoTipo1 = TipoCaixa(a, b, c, tipoCaixaOriginal);
    TipoCaixa novoTipo2 = TipoCaixa(a, c, b, tipoCaixaOriginal);
    TipoCaixa novoTipo3 = TipoCaixa(b, a, c, tipoCaixaOriginal);
    TipoCaixa novoTipo4 = TipoCaixa(b, c, a, tipoCaixaOriginal);
    TipoCaixa novoTipo5 = TipoCaixa(c, a, b, tipoCaixaOriginal);
    TipoCaixa novoTipo6 = TipoCaixa(c, b, a, tipoCaixaOriginal);

    listTipoCaixaRotacoes.push_back(novoTipo1);
    listTipoCaixaRotacoes.push_back(novoTipo2);
    listTipoCaixaRotacoes.push_back(novoTipo3);
    listTipoCaixaRotacoes.push_back(novoTipo4);
    listTipoCaixaRotacoes.push_back(novoTipo5);
    listTipoCaixaRotacoes.push_back(novoTipo6);

    return listTipoCaixaRotacoes;
}

void Util::appendArquivo(std::wstring conteudo, std::wstring fileName) {
    try {
        //TODO: change to filestream
//        PrintWriter out = new PrintWriter(new FileWriter(fileName, true));
//        out.print(conteudo + "\n");
//        out.close();
        std::wcout << conteudo << std::endl;
    } catch (std::exception e) {
//        System.err.println(e.getMessage());
        std::cout << e.what() << std::endl;
    }
}


