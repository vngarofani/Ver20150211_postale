#include <stdio.h>
#include <stdlib.h>

#include "intLinkedList.h"


/*
 * Restituisce la lunghezza della lista.
 */
int size(intLinkedList list) {
    int r=0;
    while(list!NULL){
        list=list->next
        r++;
    }
     return r;
}


/*
 * Aggiunge un nuovo elemento all'inizio della lista.
 * Restituisce il puntatore aggiornato al primo elemento.
 * Restituisce NULL in caso di errore.
 */
intLinkedList insertAtBeginning(intLinkedList list, int newKey) {
    intLinkedList * new;
    new = (intLinkedList *)malloc(sizeof (intLinkedList));
    if(new !NULL) {
        new->next = list;
        new->newKey = newKey;
        list = new;
    }
    
    return list;
}


/*
 * Stampa tutti gli elementi della lista a schermo, in un'unica linea, 
 * separandoli con punto e virgola e uno spazio.
 * 
 * Esempio:
 * 1; -2; 3; 4;  
 * 
 */
void printList(intLinkedList list) {
    
  if(list==NULL)
    return;
    printf("%d;" ,list->next);
    printList(list->next);
  
    // TODO Implementa il corpo della funzione
    
    return;
}


/*
 * Svuota la lista.
 * Restituisce sempre NULL.
 */
intLinkedList empty(intLinkedList list) {
    

    // TODO Implementa il corpo della funzione
    
    return NULL;
}