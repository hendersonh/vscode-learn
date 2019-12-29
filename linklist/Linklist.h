#include <stdbool.h>
#include <stdlib.h>
#include <stdio.h>
#ifndef LINKLIST_H
#define LINKLIST_H
#endif  LINKLIST_H

/*struct link_list */
struct link_list {
    struct link_list *next_ptr;
    char *data;
} *first_ptr ;

void Insert(char *data);

/* find a node with given data */
int find(char *data);

void print(void);

int Delete(char *data);
