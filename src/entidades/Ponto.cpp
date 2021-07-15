#include "Ponto.h"
#include <string>

std::string Ponto::toString() {
    return "Ponto (" + std::to_string(x) + "," + std::to_string(y) + "," + std::to_string(z) + ")";
}

Ponto::Ponto(int x, int y, int z) : x(x), y(y), z(z) {}


