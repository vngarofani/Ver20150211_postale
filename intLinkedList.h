
struct s_intLLElement {
    int key;
    struct s_intLLElement *next;
};

typedef struct s_intLLElement intLLElement;
typedef intLLElement * intLinkedList;


/*
 * Restituisce la lunghezza della lista.
 */
int size(intLinkedList list);


/*
 * Aggiunge un nuovo elemento all'inizio della lista.
 * Restituisce il puntatore aggiornato al primo elemento.
 * Restituisce NULL in caso di errore.
 */
intLinkedList insertAtBeginning(intLinkedList list, int newKey);


/*
 * Stampa tutti gli elementi della lista a schermo, in un'unica linea, 
 * separandoli con punto e virgola e uno spazio.
 * 
 * Esempio:
 * 1; -2; 3; 4;  
 * 
 */
void printList(intLinkedList list);


/*
 * Svuota la lista.
 * Restituisce sempre NULL.
 */
intLinkedList empty(intLinkedList list);