//
// Created by Sebastiano Taddei on 16/06/2020.
//

#include <iostream>
#include "../include/Docente.h"


Docente::Docente(const string &nome, const string &cognome, const int &matricola) {
    this->nome      = nome;
    this->cognome   = cognome;
    this->matricola = matricola;
    corsi = nullptr;
    corIndex = 0;
}

void Docente::setCorsi(const string &corso) {
    ++corIndex;
    if (corsi != nullptr) {
        auto *tmp = new string [corIndex];
        for (int i = 0; i < corIndex-1; ++i) {
            tmp[i] = corsi[i];
        }
        delete [] corsi;
        corsi = tmp;
    } else {
        corsi = new string [corIndex];
    }
    this->corsi[corIndex-1] = corso;
}

void Docente::printCorsi() {
    std::cout << nome << " " << cognome << endl;
    for (int i = 0; i < corIndex; ++i) {
        std::cout << " - Corso di " << corsi[i] << std::endl;
    }
}
