#ifndef CONSOLE_H_
#define CONSOLE_H_

#define uint unsigned int

void set_cursor_pos(uint x, uint y);

void move_cursor_up(uint v);
void move_cursor_down(uint v);
void move_cursor_right(uint v);
void move_cursor_left(uint v);

void save_cursor_pos();
void restore_cursor_pos();

void clear();
void clear_line();

typedef enum consoleTextAttribute {
    NORMAL,
    BOLD,
    FAINT,
    ITALIC,
    UNDERLINE,
    BLINK_SLOW,
    BLINK_FAST,
    REVERSE_VIDEO,
    CONCEALED,
    CROSSED
} ConsoleTextAttribute;

typedef enum consoleColor {
    BLACK,
    RED,
    GREEN,
    YELLOW,
    BLUE,
    MAGENTA,
    CYAN,
    WHITE,
    DEFAULT = 9
} ConsoleColor;

void set_text_attribute(ConsoleTextAttribute a);
void set_foreground_color(ConsoleColor c);
void set_background_color(ConsoleColor c);
void reset_foreground_color();
void reset_background_color();

typedef enum consoleMode {
    MONOCHROME_40_25,
    COLOR_40_25,
    MONOCHROME_80_25,
    COLOR_80_25,
    COLOR_4_320_200,
    MONOCHROME_320_200,
    MONOCHROME_640_200,
    LINE_WRAPPING,
    COLOR_320_200 = 13,
    COLOR_640_200,
    MONOCHROME_640_350,
    COLOR_640_350,
    MONOCHROME_640_480,
    COLOR_640_480,
    COLOR_256_320_200
} ConsoleMode;

void set_mode(ConsoleMode m);
void reset_mode(ConsoleMode m);

#endif
