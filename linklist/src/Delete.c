#include "Linklist.h"

int Delete(char *data){
/* find node with given data and delete it */ 
    struct link_list *cursor = first_ptr; 
    struct link_list *precursor; 
    while ( cursor != NULL){
        if ( strcmp(cursor->data, data) == 0){  /* is data located in this node? */
            if ( cursor == first_ptr ) {            /*first node to be deleted?*/
                first_ptr = cursor->next_ptr;
                free(cursor) ;
                return(0);
            }

            if (cursor->next_ptr == NULL) {         /*last node to be deleted*/
                precursor->next_ptr = NULL;  
                free(cursor);
                return(0);
            }

            /* node to be removed is in the middle */ 
            precursor->next_ptr = cursor->next_ptr; 
            free(cursor);
            return(0);
        }
        precursor = cursor; 
        cursor = cursor->next_ptr; /* go to next node */
    }
    return(false);
}
