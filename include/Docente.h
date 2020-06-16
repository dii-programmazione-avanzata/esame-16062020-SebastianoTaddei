//
// Created by Sebastiano Taddei on 16/06/2020.
//

#ifndef ESAME_16062020_SEBASTIANOTADDEI_DOCENTE_H
#define ESAME_16062020_SEBASTIANOTADDEI_DOCENTE_H


#include "Dipendente.h"

class Docente : public Dipendente {
protected:
    string *corsi;
    int corIndex;

public:
    Docente(const string &nome, const string &cognome, const int &matricola);
    ~Docente() { if (corsi != nullptr) delete [] corsi;}

    void setCorsi(const string &corso);
    string *getCorsi() { return corsi; }
    void printCorsi();
};


#endif //ESAME_16062020_SEBASTIANOTADDEI_DOCENTE_H
