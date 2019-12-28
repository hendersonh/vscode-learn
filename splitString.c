#include <stdio.h>
#include <stdlib.h>
/* Given a string containining a char-token, return strings before and after token
E.G: Given "Henderson/Hood" returns "Henderson" and "Hood" 
*/

char* my_strchar(char *string_ptr, char token){
    char *loc_ptr = string_ptr;
    while( *loc_ptr != token ){
        if (*loc_ptr == '\0')
            return(NULL);
        loc_ptr++;
    }
    return(loc_ptr);
}

int main(){
    char line[80] = "Henderson/Hood";
    char *first_ptr; 
    char  *last_ptr = line;
    
    first_ptr = my_strchar(line, '/');
    if ( !first_ptr ){
        printf("No token located.\n");
        return(0);
    }
    
    *first_ptr = '\0';
    first_ptr++;
    printf("Last name is %s, First name is %s", first_ptr, last_ptr);
}