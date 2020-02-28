#include "console.h"
#include <stdio.h>

#define WIDTH 32
#define HEIGHT 16
#define COLORS 7

// [y][x]
ConsoleColor screen[HEIGHT][WIDTH];

// Displays the screen
void dispScreen()
{
    for (int y = 0; y < HEIGHT; ++y)
    {
        for (int x = 0; x < WIDTH; ++x)
        {
            set_background_color(screen[y][x]);
            putchar(' ');
        }

        set_background_color(DEFAULT);
        putchar('\n');
    }
}

void fillScreen(const ConsoleColor COL)
{
    for (int y = 0; y < HEIGHT; ++y)
        for (int x = 0; x < WIDTH; ++x)
            screen[y][x] = COL;
}

void putCircle(const ConsoleColor COL, const unsigned SIZE)
{
    for (int y = -HEIGHT / 2; y < HEIGHT / 2; ++y)
        for (int x = -WIDTH / 2; x < WIDTH / 2; ++x)
            if ((unsigned)(x * x + y * y) <= SIZE * SIZE)
                screen[y + HEIGHT / 2][x + WIDTH / 2] = COL;
}

int main()
{
    fillScreen(RED);

    for (int i = WIDTH / 2; i > 0; --i)
        putCircle((i / 2) % COLORS, i);

    dispScreen();

    return 0;
}
