cmake_minimum_required(VERSION 3.19)
project(icefrog2)

set(CMAKE_CXX_STANDARD 14)

add_executable(icefrog2 main.cpp src/entidades/PontoFlutuante.cpp src/entidades/PontoFlutuante.h src/entidades/Problema.cpp src/entidades/Problema.h src/entidades/Ponto.cpp src/entidades/Ponto.h src/entidades/Conteiner.cpp src/entidades/Conteiner.h src/entidades/TipoCaixa.cpp src/entidades/TipoCaixa.h src/util/Util.cpp src/util/Util.h src/util/Util.cpp src/util/Util.h src/entidades/Caixa.cpp src/entidades/Caixa.h)