/* Return length of String */
#include <stdio.h>
#include <string.h>

int length(char string[]) { 
    int index; /* index into the string */

    /* * Loop until we reach the end of string character */ 
    for (index = 0; string[index] != '\0'; ++index) {
        ;   
    }
    return (index); 
}

int main() { 
    char line[100]; 
    char word[20];
    
    while (1) { 
        printf("Enter word: ");
        fflush(stdout);
        fgets(line, sizeof(line), stdin);  
        sscanf(line, "%s", word);
        if ( ! strcmp(word, "quit") ) return(0);
        printf("Length is: %d\n", length(word)); 
    } 
}