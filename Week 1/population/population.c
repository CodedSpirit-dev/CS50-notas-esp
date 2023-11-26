#include <stdio.h>

int main(void)
{
    // TODO: Prompt for start size
    int start_size;
    do
    {
        printf("Start size: ");
        scanf("%i", &start_size);
    }
    while (start_size < 9);

    // TODO: Prompt for end size
    int end_size;
    do
    {
        printf("End size: ");
        scanf("%i", &end_size);
    }
    while (end_size < start_size);

    // TODO: Calculate number of years until we reach threshold
    int years = 0;
    while (start_size < end_size)
    {
        start_size += start_size / 4;
        years++;
    }

    // TODO: Print number of years
    printf("Years: %i\n", years);
}
