#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int number_random(int max);

int main(void)
{
    return 0;
}

int number_random(int max)
{
    srand(time(NULL));
    return (rand() % max) ;
}