#include <stdlib.h>
#include <stdio.h>
#include <string.h>

char *names[] = {"Hendy", "Kenneth", "Elvis", "Fernando", "Clee", "Dian Brown"};
char name[40];

int count = sizeof(names) / sizeof(names[0]);
int main() { 
    for (int i = 0; i < count; i++) {
       strcpy(name, *(names+i) ); 
       printf("Name is : %s\n", name);
    }
}