#include <stdio.h>
#include <cs50.h>
int main(void)
{
    string name;
    name = get_string("What is your name? ");
    printf("Hello, %s!\n", name);
}
