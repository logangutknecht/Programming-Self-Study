#include <cs50.h>
#include <stdio.h>

int main(void)
{
    // TODO: Prompt for start size
    int x;
    do{x = get_int("Starting Population: ");} while (x<9);

    // TODO: Prompt for end size
    int y;
    do {y = get_int("End Population:");} while (y<x);

    // TODO: Calculate number of years until we reach threshold
    int counter = 0;
    while (x<y){
        x = x + (x/3) - (x/4);
        counter ++;
    }

    // TODO: Print number of years
    printf("Years: %i/n", counter);
}
