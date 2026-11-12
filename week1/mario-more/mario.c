#include <cs50.h>
#include <stdio.h>

int main(void)
{
    int height;
    do
    {
        height = get_int("Height: ");
    }
    while (height < 1 || height > 8);

    for (int i = 0; i < height; i++)
    {
        // Spazi a sinistra
        for (int j = 0; j < height - i - 1; j++)
        {
            printf(" ");
        }

        // Blocchi di sinistra (#)
        for (int j = 0; j < i + 1; j++)
        {
            printf("#");
        }

        // Spazio centrale (2 spazi)
        printf("  ");

        // Blocchi di destra (#)
        for (int j = 0; j < i + 1; j++)
        {
            printf("#");
        }

        // Nuova riga
        printf("\n");
    }
}
