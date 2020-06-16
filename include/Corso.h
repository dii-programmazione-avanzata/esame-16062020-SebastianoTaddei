//
// Created by Sebastiano Taddei on 16/06/2020.
//

#ifndef ESAME_16062020_SEBASTIANOTADDEI_CORSO_H
#define ESAME_16062020_SEBASTIANOTADDEI_CORSO_H

#include "Studente.h"
#include "Docente.h"
#include "Lezione.h"

class Corso {
protected:
    Docente *docente;
    Studente **studenti;
    int stuIndex;
    Lezione **lezioni;
    int lezIndex;
    int anno;
    string nome;
    string *aule;
    int aulIndex;

public:
    Corso(const string &nome, const int &anno, Docente &docente);

    void addStudente(Studente &studente);
    void addLezione(Lezione &lezione);

    string getNome() { return nome;}
    int getAnno() { return anno; }

    void printDocente();
    void printAule();
    void printCorso();
    Docente *getDocente() { return docente; }
    Studente **getStudenti() { return studenti;}
    Lezione **getLezioni() { return lezioni;}
};


#endif //ESAME_16062020_SEBASTIANOTADDEI_CORSO_H
