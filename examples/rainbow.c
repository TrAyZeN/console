#include "console.h"
#include <stdio.h>

#define COLOR_NUMBER 7
#define RAINBOW_LENGTH 15

int main()
{
    int l, c;

    for (l = 0; l < RAINBOW_LENGTH; l++)
    {
        for (c = 0; c < COLOR_NUMBER; c++)
        {
            set_background_color(c);
            printf("  ");
        }
        set_background_color(DEFAULT);
        printf("\n");
    }

    return 0;
}
