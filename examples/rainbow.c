#include "console.h"
#include <stdio.h>

int main()
{
    int l, c;

    for (l = 0; l < 15; l++)
    {
        for (c = 0; c < 7; c++)
        {
            set_background_color(c);
            printf("  ");
        }
        set_background_color(DEFAULT);
        printf("\n");
    }

    return 0;
}
