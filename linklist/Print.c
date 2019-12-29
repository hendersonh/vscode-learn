#include "Linklist.h"

/* print the data in each node */
void Print(void){
    struct link_list *temp = first_ptr;
    while(temp != NULL){
        printf(" %s\n", temp->data);
        temp = temp->next_ptr;
    }
}