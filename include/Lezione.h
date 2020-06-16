//
// Created by Sebastiano Taddei on 16/06/2020.
//

#ifndef ESAME_16062020_SEBASTIANOTADDEI_LEZIONE_H
#define ESAME_16062020_SEBASTIANOTADDEI_LEZIONE_H

#include <string>

using namespace std;

struct Aula {
    string ID;
    int posti;
    string *corsiAule;
    int corsoIndex;
    Aula(const string &ID, const int posti) : ID(ID), posti(posti), corsiAule(nullptr), corsoIndex(0) { }
    ~Aula() { if (corsiAule != nullptr) delete [] corsiAule; }
    void setCorsi(const string &corso);
    void printCorsi() const;
};

struct Data {
    int giorno;
    int mese;
    int anno;
    Data(const int giorno, const int mese, const int anno) : giorno(giorno), mese(mese), anno(anno) { }
};

class Lezione {
protected:
    string corso;
    Aula &aula;
    Data &data;
    int oraInizio;
    int durata;

public:
    Lezione(Aula &aula, Data &data, const int oraInzio, const int durata);

    Aula &getAula() { return aula; }
    Data &getData() { return data; }
    int getDurata() { return durata; }
    int getOraInizio() { return oraInizio; }
    void setCorso(const string &corso) {this->corso = corso;}
};


#endif //ESAME_16062020_SEBASTIANOTADDEI_LEZIONE_H
