#include <stdio.h>

#include "console.h"

// \033 is the Escape character

/*
 * Moves the cursor to the specified postion
 */
void set_cursor_pos(uint x, uint y)
{
    printf("\033[%d;%dH", y, x);
}


/*
 * Moves the cursor up by the specified number of lines
 */
void move_cursor_up(uint v)
{
    printf("\033[%dA", v);
}

/*
 * Moves the cursor down by the specified number of lines
 */
void move_cursor_down(uint v)
{
    printf("\033[%dB", v);
}

/*
 * Moves the cursor to the right by the specified number of columns
 */
void move_cursor_right(uint v)
{
    printf("\033[%dC", v);
}

/*
 * Moves the cursor to the left by the specified number of columns
 */
void move_cursor_left(uint v)
{
    printf("\033[%dD", v);
}


/*
 * Saves the current cursor position
 */
void save_cursor_pos()
{
    printf("\033[s");
}

/*
 * Moves the cursor to the cursor saved position
 */
void restore_cursor_pos()
{
    printf("\033[u");
}


/*
 * Clears the screen and moves the cursor to the home position
 */
void clear()
{
    printf("\033[2J");
}

/*
 * Clears character from the cursor position to the end of the line
 */
void clear_line()
{
    printf("\033[K");
}

/*
 * Sets attribute for the text to be written
 */
void set_text_attribute(ConsoleTextAttribute a)
{
    printf("\033[%dm", a);
}

/*
 * Sets the foreground color for the text to be written
 */
void set_foreground_color(ConsoleColor c)
{
    printf("\033[%dm", c + 30);
}

/*
 * Sets the background color for the text to be written
 */
void set_background_color(ConsoleColor c)
{
    printf("\033[%dm", c + 40);
}

/*
 * Resets the foreground color for the text to be written
 */
void reset_foreground_color()
{
    set_foreground_color(DEFAULT);
}

/*
 * Resets the background color for the text to be written
 */
void reset_background_color()
{
    set_background_color(DEFAULT);
}

/*
 * Changes the screen width or type
 */
void set_mode(ConsoleMode m)
{
    printf("\033[=%dh", m);
}

/*
 * Resets the console mode
 */
void reset_mode(ConsoleMode m)
{
    printf("\033[=%dl", m);
}
