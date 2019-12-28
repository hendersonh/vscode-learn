#include <stdlib.h>
#include <stdio.h>
#include <unistd.h> 

int main() {
    int i; 
    for (i = 0; i <= 25; i+=5 ) { 
        sleep(i);  //delay of one second 
        printf("%d seconds have passed\n", i*5); 
    } 
    return 0; 
}