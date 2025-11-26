#include "./headers/asl.h"
/**
 * semd_t => int* è l'indirizzo che contiene il valore del semaforo. Viene passato da kernel o qualcuno in alto
 *        => s_procq è la lista dei processi bloccati sul semaforo(lista interna)
 *        => s_link è la lista di semafori attivi -> Kernel li utilizza per gestione(lista esterna)
 * Avremo una lista semd_h di semafori attivi e riconoscibili con la propria key definita da semAdd.
 */
static semd_t semd_table[MAXPROC];  // array di semafori 
static struct list_head semdFree_h; // lista di semafori non ancora utilizzati
static struct list_head semd_h;     // lista di semafori attivi

//inizializza semdFree_h con MAXPROC. analoga a quella delle queue.
void initASL() {
}

/**aggiunge in coda al semaforo associato alla key semAdd. 
 * Se non c'è corrispondenza nella lista semd_h si inizializza un nuovo semaforo con key semAdd.
 */
int insertBlocked(int* semAdd, pcb_t* p) {
}

/** ricerca corrispondenza key, se non c'è NULL
 * altrimenti rimuovi primo nodo di s_procq associato a semAdd  e ritorna il puntatore al processo.
 * Se la coda diventa vuota allora rimuovi il semaforo da s_link*/
pcb_t* removeBlocked(int* semAdd) {
}


/**
 * Questa non mi è chiara: perchè dovrei voler rimuovere dalla coda di un semaforo un processo preciso?
 * Trovo processo sulla coda definita da p(contiene riferimento al suo semaforo) e lo rimuove.
 * Se non c'è ritorna NULL altrimenti p
 */
pcb_t* outBlocked(pcb_t* p) {
}
/**
 * Ritorna un puntatore alla testa del semaforo associato alla key semAdd. Se non trova ritorna null.
 */
pcb_t* headBlocked(int* semAdd) {
}
