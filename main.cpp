#include <iostream>
#include "include/Studente.h"
#include "include/Docente.h"
#include "include/Lezione.h"
#include "include/Corso.h"

using namespace std;

int main() {
    // Creiamo degli studenti
    Studente seb("Sebastiano", "Taddei", 193162);
    Studente nic("Nicola", "Mengarda", 193111);

    // Creiamo dei docenti
    Docente d1("Silvio", "Pagnotto", 111111);
    Docente d2("Albino", "Sabbatini", 222222);

    // Creiamo delle lezioni
    Data data1(11, 11, 2001);
    Data data2(12, 12, 2002);
    Aula aula1("A101", 200);
    Aula aula2("B107", 150);
    Lezione lez1(aula1, data1, 10, 2);
    Lezione lez2(aula2, data2, 12, 3);

    // Creiamo dei corsi
    Corso corso1("Informatica", 1, d1);
    corso1.addStudente(seb);
    corso1.addStudente(nic);
    corso1.addLezione(lez1);
    corso1.addLezione(lez2);
    Corso corso2("Programmazione", 2, d2);
    corso2.addStudente(seb);
    corso2.addLezione(lez1);

    // Test funzionalità di ricerca
    d1.printCorsi(); // mostriamo i corsi insegnati da un docente
    d2.printCorsi();
    cout << endl;
    aula1.printCorsi(); // mostriamo i corsi insegnati in un'aula
    aula2.printCorsi();
    cout << endl;
    corso1.printDocente(); // mostriamo i docenti che insegnano un corso
    corso2.printDocente();
    cout << endl;
    corso1.printAule(); // mostriamo le aule associate ad un corso
    corso2.printAule();
    cout << endl;
    corso1.printCorso(); // mostriamo per intero il corso
    corso2.printCorso();


    return 0;
}
