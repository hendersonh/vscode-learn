#include "Linklist.h"

/* Insert a node in the Link list */
void Insert(char *data){
    struct link_list *temp = (struct link_list*) malloc(sizeof(struct link_list));
    temp->data = data;
    temp->next_ptr = first_ptr;  
    first_ptr = temp;
}