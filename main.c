#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <time.h>

#define MAX_RAND 100

int number_random(int max);

int main(void)
{
    bool stop = false; 
    
    while (! stop){
        int nb_rand = number_random(MAX_RAND);
        
    }

    return 0;
}

int number_random(int max)
{
    srand(time(NULL));
    return (rand() % max) ;
}