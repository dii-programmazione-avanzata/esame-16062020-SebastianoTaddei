//
// Created by Sebastiano Taddei on 16/06/2020.
//

#include <iostream>
#include "../include/Lezione.h"

Lezione::Lezione(Aula &aula, Data &data, const int oraInzio, const int durata):
aula(aula), data(data), oraInizio(oraInzio), durata(durata), corso(0) { }

void Aula::setCorsi(const string &corso) {
    ++corsoIndex;
    if (corsiAule != nullptr) {
        auto *tmp = new string [corsoIndex];
        for (int i = 0; i < corsoIndex-1; ++i) {
            tmp[i] = corsiAule[i];
        }
        delete [] corsiAule;
        corsiAule = tmp;
    } else {
        corsiAule = new string [corsoIndex];
    }
    this->corsiAule[corsoIndex-1] = corso;
}

void Aula::printCorsi() {
    std::cout << "Aula " << ID << endl;
    for (int i = 0; i < corsoIndex; ++i) {
        std::cout << " - Corso di " << corsiAule[i] << endl;
    }
}
