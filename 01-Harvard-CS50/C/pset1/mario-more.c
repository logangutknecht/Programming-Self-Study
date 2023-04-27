#include <cs50.h>
#include <stdio.h>

int main(void)
{
    int blocks;
    do{
    blocks = get_int("How many blocks will Mario jump? ");
    } while (blocks <1 || blocks > 8);


    int x;
    for (x=0; x<blocks; x++){
        for (int e = 0; e < blocks; e++){
            if (x+e < blocks-1){
                printf(" ");
            }
            else{printf("#");}

        }
        printf("  ");
        for (int e = 0; e<=x; e++){
           printf("#");
        }
        printf("\n");
    }
}