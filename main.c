#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <time.h>

#define MAX_RAND 100

int number_random(int max);

int main(void)
{
    bool stop = false;
    int nb_rand = number_random(MAX_RAND);
    int number_enter;

    while (!stop)
    {
        printf("Entrez un nombre: ");
        scanf("%d", &number_enter);

        if (number_enter == number_random)
        {
            printf("Vous avez trouver le bon nombre !");
            stop = true;
        }

        else if (number_enter > nb_rand)
        {
            printf("Le nombre entrez est plus grand que le nombre mystere !");
        }
        else
        {
            printf("Le nombre entrez est plus petit que le nombre mystere !");
        }
    }

    return 0;
}

int number_random(int max)
{
    srand(time(NULL));
    return (rand() % max);
}