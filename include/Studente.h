//
// Created by Sebastiano Taddei on 16/06/2020.
//

#ifndef ESAME_16062020_SEBASTIANOTADDEI_STUDENTE_H
#define ESAME_16062020_SEBASTIANOTADDEI_STUDENTE_H


#include "Dipendente.h"

class Studente : public Dipendente {
public:
    Studente(const string &nome, const string &cognome, const int &matricola);

    string &getNome() { return nome; }
    string &getCognome() { return cognome;}
    int getMatricola() { return matricola;}
};


#endif //ESAME_16062020_SEBASTIANOTADDEI_STUDENTE_H
