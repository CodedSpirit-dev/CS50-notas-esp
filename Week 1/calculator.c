#include <stdio.h>
#include <cs50.h>

int main(void)
{
    printf("This is only a sum calculator\n");
    // Prompt user for x
    int x = get_int("Insert first number: ");

    // Prompt user for y
    int y = get_int("Insert second number: ");

    // Perform addition
    printf("%i\n", x + y);
}