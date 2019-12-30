#include "Linklist.h"

int main(){
    static char *names[]= {"Hendy", "Elvis", "Kenneth", "David", "Gwendoly", "Mark"};
    int count = sizeof(names) / sizeof(names[0]);
    int i;
    
    first_ptr = NULL; 
    for (i = 0; i < count; i++){
        Insert(*(names+i));
    } 

    /*Delete("Elvis"); 
    Delete("Kenneth"); 
    Delete("David"); 
    Delete("Gwendoly"); */
    Print();
   /*find("Hendy") == true ? printf("Data: is located\n") : printf("Data: is not located\n");
  */ 
}