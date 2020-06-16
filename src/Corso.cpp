//
// Created by Sebastiano Taddei on 16/06/2020.
//

#include <iostream>
#include "../include/Corso.h"

Corso::Corso(const string &nome, const int &anno, Docente &docente) {
    this->nome = nome;
    this->anno = anno;
    this->docente  = &docente;
    docente.setCorsi(this->nome);

    studenti = nullptr;
    lezioni  = nullptr;
    aule     = nullptr;
    stuIndex = 0;
    lezIndex = 0;
    aulIndex = 0;
}

void Corso::addStudente(Studente &studente) {
    ++stuIndex;
    if (studenti != nullptr) {
        auto **tmp = new Studente *[stuIndex];
        for (int i = 0; i < stuIndex-1; ++i) {
            tmp[i] = studenti[i];
        }
        delete [] studenti;
        studenti = tmp;
    } else {
        studenti = new Studente *[stuIndex];
    }
    this->studenti[stuIndex-1] = &studente;
}

void Corso::addLezione(Lezione &lezione) {
    ++lezIndex;
    if (lezioni != nullptr) {
        auto **tmp = new Lezione *[lezIndex];
        for (int i = 0; i < lezIndex-1; ++i) {
            tmp[i] = lezioni[i];
        }
        delete [] lezioni;
        lezioni = tmp;
    } else {
        lezioni = new Lezione *[lezIndex];
    }
    this->lezioni[lezIndex-1] = &lezione;

    ++aulIndex;
    if (aule != nullptr) {
        bool check = true;
        for (int j = 0; j < aulIndex-1; ++j) {
            if (aule[j] == lezione.getAula().ID) {
                check = false;
            }
        }
        if (!check)
            --aulIndex;

        if (check) {
            auto *tmp = new string [aulIndex];
            for (int i = 0; i < aulIndex-1; ++i) {
                tmp[i] = aule[i];
            }
            delete [] aule;
            aule = tmp;
            this->aule[aulIndex-1] = lezione.getAula().ID;
            lezione.getAula().setCorsi(nome);
        }
    } else {
        aule = new string [aulIndex];
        this->aule[aulIndex-1] = lezione.getAula().ID;
        lezione.getAula().setCorsi(nome);
    }
}

void Corso::printDocente() {
    std::cout << "Corso di " << nome << " tenuto dal docente " << docente->getNome() << " ";
    std::cout << docente->getCognome() << endl;
}

void Corso::printAule() {
    std::cout << "Il corso di " << nome << " è tenuto nelle aule:" << endl;
    for (int i = 0; i < aulIndex; ++i) {
        std::cout << " - " << aule[i] << endl;
    }
}

void Corso::printCorso() {
    cout << "Corso di " << nome << endl;
    cout << "Docente: " << docente->getNome() << " " << docente->getCognome() << endl;
    cout << "Anno: " << anno << endl;
    cout << "Studenti:" << endl;
    for (int i = 0; i < 2; ++i) {
        cout << " - " << studenti[i]->getNome() << " " << studenti[i]->getCognome() << endl;
    }
    cout << "Lezioni:" << endl;
    for (int i = 0; i < 2; ++i) {
        cout << " - " << lezioni[i]->getData().giorno << "/" << lezioni[i]->getData().mese << "/";
        cout << lezioni[i]->getData().anno << ", " << lezioni[i]->getOraInizio() << ":00-";
        cout << lezioni[i]->getDurata()+lezioni[i]->getOraInizio() << ":00, aula " << lezioni[i]->getAula().ID << endl;
    }
}
