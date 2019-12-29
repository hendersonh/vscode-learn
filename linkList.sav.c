/* Link List - by Henderson Hood*/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>

/*Create the node */
struct link_list {
    struct link_list *next_ptr;
    char *data;
} *first_ptr = NULL;

/* print the data in each node */
void Print(void){
    struct link_list *temp = first_ptr;
    while(temp != NULL){
        printf(" %s\n", temp->data);
        temp = temp->next_ptr;
    }
}

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

/* Insert a node in the Link list */
void Insert(char *data){
    struct link_list *temp = (struct link_list*) malloc(sizeof(struct link_list));
    temp->data = data;
    temp->next_ptr = first_ptr;  
    first_ptr = temp;
}

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
    
int main(){
    static char *names[]= {"Hendy", "Elvis", "Kenneth", "David", "Gwendoly", "Mark"};
    int count = sizeof(names) / sizeof(names[0]);
    int i;
    for (i = 0; i < count; i++){
        Insert(*(names+i));
    } 

    Print();  
    Delete("Elvis"); 
    Delete("Kenneth"); 
    Delete("David"); 
    Delete("Gwendoly"); 
    Print();
   /*find("Hendy") == true ? printf("Data: is located\n") : printf("Data: is not located\n");*/
}