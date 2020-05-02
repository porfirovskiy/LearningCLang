#include <stdio.h>
#include <stdlib.h>

const int number = 12;

/**
 * Functions list
 */
void tableFor10Numbers();

/**
 * Enter in program
 */
int main(int argc, char** argv) {    

    tableFor10Numbers();
    
    return (EXIT_SUCCESS);
}

void tableFor10Numbers() {
    for (int i = 1; i < 11; i++)
    {
        for (int i2 = 1; i2 < 11; i2++) {
            printf("%d \t", i * i2); 
        }
       printf("\n"); 
    }
}

