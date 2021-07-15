
#include "PontoFlutuante.h"
#include <cmath>

PontoFlutuante::PontoFlutuante(double x, double y, double z) : x(x), y(y), z(z) {}

std::string PontoFlutuante::toString() {
    return "Ponto Flutuante (" + std::to_string(x) + "," + std::to_string(y) + "," + std::to_string(z) + ")";
}

double PontoFlutuante::calculaDistancia(PontoFlutuante outroPonto) const {
    double distancia = 0;
    // http://en.wikipedia.org/wiki/Euclidean_distance
    distancia = sqrt(pow(x - outroPonto.x, 2)
                     + pow(y - outroPonto.y, 2)
                     + pow(z - outroPonto.z, 2));
    return distancia;
}
