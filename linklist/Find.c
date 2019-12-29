#include "Linklist.h"

/* find a node with given data */
int find(char *data){
    struct link_list *cursor = first_ptr; 
    while ( cursor != NULL){
        if ( strcmp(cursor->data, data) == 0){  /* is data located in this node */
            return true;
        }
        cursor = cursor->next_ptr; /* go to next node */
    }
    return(false);
}