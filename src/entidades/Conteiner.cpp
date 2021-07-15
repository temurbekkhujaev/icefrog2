//
// Created by temur on 7/17/2021.
//

#include "Conteiner.h"

Conteiner::Conteiner(int w, int h, int d) : w(w), h(h), d(d) {}

int Conteiner::volume() {
    return w * h * d;
}

std::string Conteiner::toString() {
    return "Container [" + std::to_string(w) + "," + std::to_string(h) + "," + std::to_string(d) + "]";
}

PontoFlutuante Conteiner::getCentroGeometrico() const {
    return {(double) w / 2, (double) h / 2,
                              (double) d / 2};
}

