# TPA 2020 - Corso di Laurea Universitario
Questa repository contiene il testo dell'esame del corso "Tecniche di Programmazione Avanzata" del Dipartimento di Ingegneria Industriale, anno accademico 2019/2020.

#### Comunicazione per il professore
Inserisci qui eventuali comunicazioni (brevi!) per il professore, come ad esempio:
* Non sono riuscito a finire l'implementazione per mancanza di tempo, quindi fornisco anche il progetto nel file `progetto.pdf`
* Mi ritiro dall'esame

# Descrizione dell'esercizio
L'esercizio consiste nella progettazione e nell'implementazione di un software in C++ per la gestione di un corso di laurea. Il software deve essere scritto mediante il paradigma di programmazione ad oggetti, quindi utilizzando (ove possibile) classi, ereditarietà, incapsulamento e polimorfismo (anche se in questo specifico esame potrebbe risultare dificcile utilizzare il polimorfismo). Nessun codice di partenza è fornito. Lo studente deve occuparsi sia della progettazione che dell'implementazione. Si consiglia di sottomettere anche il progetto del software, soprattutto se l'implementazione dovesse essere incompleta (ad esempio per mancanza di tempo). Il progetto sarà tenuto in conto nella valutazione finale. Formati accettabili per il progetto sono formati visuali (come pdf o jpeg) o formati testuali semplici (come txt o rtf). Idealmente l'implementazione dovrebbe includere anche una serie di test per verificare il corretto funzionamento del codice scritto.

## Dati
Il software deve permettere la memorizzazione e l'elaborazione di dati relativa alla programmazione didattica di un corso di laurea universitario. I dati da immagazzinare sono:
* i corsi erogati ogni anno 
* i docenti che insegnano ogni corso
* gli studenti iscritti ad ogni corso
* le aule, i giorni, e gli orari delle lezioni di ogni corso

Ogni studente ha un nome, un cognome, una matricola.
Ogni docente ha un nome, un cognome, una matricola.
Ogni corso ha un docente, una lista di studenti, una lista di lezioni, un anno (a scelta tra 1, 2 o 3).
Ogni lezione è associata ad un corso, una data, un’ora di inizio, una durata, un’aula.
Ogni aula ha un ID, un numero di posti.

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

# Dati di esempio
### Studenti
* Silvio Pagnotto
* Albino Sabbatini
* Donata Milanesi
* Gerolamo Pinto
* Maria Sal

### Docenti
* Gabriella Dellucci
* Fabrizia Piccio

### Corso "Informatica"
* Docente: Gabriella Dellucci
* Anno: 1
* Studenti:
  * Silvio Pagnotto
  * Albino Sabbatini
  * Donata Milanesi
  * Gerolamo Pinto
* Lezioni
  * 15/09/2020, 10:00-12:00, aula B102
  * 17/09/2020, 14:00-15:00, aula B101
  * 20/09/2020, 10:00-12:00, aula B102
  * 25/09/2020, 14:00-16:00, aula B101

### Corso "Elettronica"
* Docente: Fabrizia Piccio
* Anno: 1
* Studenti
  * Silvio Pagnotto
  * Albino Sabbatini
  * Maria Sal
  * Gerolamo Pinto
* Lezioni
  * 15/09/2020, 14:00-15:00, aula B102
  * 17/09/2020, 15:00-16:00, aula B101
  * 20/09/2020, 11:00-13:00, aula B102
  * 25/09/2020, 14:00-16:00, aula B102
