# TPA 2020 - Corso di Laurea Universitario
Questa repository contiene il testo dell'esame del corso "Tecniche di Programmazione Avanzata" del Dipartimento di Ingegneria Industriale, anno accademico 2019/2020.

#### Comunicazione per il professore
Inserisci qui eventuali comunicazioni per il professore, come ad esempio:
* Non sono riuscito a finire l'implementazione per mancanza di tempo, quindi fornisco anche il progetto nel file `progetto.pdf`
* Mi ritiro dall'esame

# Descrizione dell'esercizio
L'esercizio consiste nella progettazione e nell'implementazione di un software in C++ per la gestione di un corso di laurea. Il software deve essere scritto mediante il paradigma di programmazione ad oggetti, quindi utilizzando (ove possibile) classi, ereditarietà, incapsulamento e polimorfismo. Nessun codice di partenza è fornito. Lo studente deve occuparsi sia della progettazione, sia dell'implementazione. Se l'implementazione dovesse essere incompleta (ad esempio per mancanza di tempo) si consiglia di sottomettere anche il progetto del software, che sarà tenuto in conto nella valutazione finale.

## Dati
Il software deve permettere la memorizzazione e l'elaborazione di dati relativa alla programmazione didattica di un corso di laurea universitario. I dati da immagazzinare devono permettere di sapere:
* quali corsi sono erogati ogni anno 
* quali docenti insegnano ogni corso
* quali studenti sono iscritti ad ogni corso
* in quale aula, giorno, ed ora sono previste le lezioni di ogni corso

Ogni studente ha un nome, un cognome, una matricola, un corso di laurea.
Ogni docente ha un nome, un cognome, una matricola.
Ogni corso ha un docente, una lista di studenti, una lista di lezioni, un anno (a scelta tra 1, 2 o 3).
Ogni lezione è associata ad un corso, una data, un’ora di inizio, una durata, un’aula.
Ogni aula ha un ID, un edificio, un piano, un numero di posti.

## Funzionalità
Il software deve implementare diverse funzionalità.

### Funzionalità di ricerca
Le funzionalità più semplici sono quelle di ricerca di informazioni. L'implementazione corretta di queste funzionalità è sufficiente per il superamento dell'esame:
* mostrare i corsi insegnati da un docente.
* mostrare i corsi insegnati in un’aula.
* mostrare i docenti che insegnano un corso.
* mostrare le aule associate ad un corso.
* visualizzare tutti i corsi, mostrando tutte le informazioni, compresi docente ed aula.

### Funzionalità di controllo
Queste funzionalità sono più complesse di quelle di riceca, in quanto richiedono l'elaborazione dei dati memorizzati per verificare la coerenza del programma didattico:
* verificare che il numero di posti in aula sia sufficiente per le lezioni previste.
* verificare che non ci siano sovrapposizioni temporali tra lezioni di corsi dello stesso anno.
