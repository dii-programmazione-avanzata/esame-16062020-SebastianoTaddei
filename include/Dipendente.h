//
// Created by Sebastiano Taddei on 16/06/2020.
//

#ifndef ESAME_16062020_SEBASTIANOTADDEI_DIPENDENTE_H
#define ESAME_16062020_SEBASTIANOTADDEI_DIPENDENTE_H

#include <string>

using namespace std;

class Dipendente {
protected:
    string nome;
    string cognome;
    int matricola;
public:
    const string &getNome() { return nome; }
    const string &getCognome() { return cognome; }
    const int getMatricola() { return matricola; }
};


#endif //ESAME_16062020_SEBASTIANOTADDEI_DIPENDENTE_H
