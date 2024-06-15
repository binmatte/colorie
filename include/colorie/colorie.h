#ifndef COLORIE_H
#define COLORIE_H

#include <stdio.h>

#define CLR_ANSI_FG_BLACK          "\033[30m"
#define CLR_ANSI_FG_RED            "\033[31m"
#define CLR_ANSI_FG_GREEN          "\033[32m"
#define CLR_ANSI_FG_YELLOW         "\033[33m"
#define CLR_ANSI_FG_BLUE           "\033[34m"
#define CLR_ANSI_FG_MAGENTA        "\033[35m"
#define CLR_ANSI_FG_CYAN           "\033[36m"
#define CLR_ANSI_FG_WHITE          "\033[37m"

#define CLR_ANSI_BG_BLACK          "\033[40m"
#define CLR_ANSI_BG_RED            "\033[41m"
#define CLR_ANSI_BG_GREEN          "\033[42m"
#define CLR_ANSI_BG_YELLOW         "\033[43m"
#define CLR_ANSI_BG_BLUE           "\033[44m"
#define CLR_ANSI_BG_MAGENTA        "\033[45m"
#define CLR_ANSI_BG_CYAN           "\033[46m"
#define CLR_ANSI_BG_WHITE          "\033[47m"

#define CLR_ANSI_RESET             "\033[0m"
#define CLR_ANSI_BOLD               "\033[1m"
#define CLR_ANSI_DIM                "\033[2m"
#define CLR_ANSI_ITALIC             "\033[3m"
#define CLR_ANSI_UNDERLINE          "\033[4m"
#define CLR_ANSI_BLINK              "\033[5m"
#define CLR_ANSI_INVERT             "\033[7m"
#define CLR_ANSI_HIDDEN             "\033[8m"
#define CLR_ANSI_STRIKE             "\033[9m"

typedef enum {
    CLR_COLOR_BLACK,
    CLR_COLOR_RED,
    CLR_COLOR_GREEN,
    CLR_COLOR_YELLOW,
    CLR_COLOR_BLUE,
    CLR_COLOR_MAGENTA,
    CLR_COLOR_CYAN,
    CLR_COLOR_WHITE,
} CLRColor;

typedef enum {
    CLR_ATTR_BOLD,
    CLR_ATTR_DIM,
    CLR_ATTR_ITALIC,
    CLR_ATTR_UNDERLINE,
    CLR_ATTR_BLINK,
    CLR_ATTR_INVERT,
    CLR_ATTR_HIDDEN,
    CLR_ATTR_STRIKE,
} CLRAttr;

#define CLR_COLORS_COUNT 8
#define CLR_ATTR_COUNT 8
#define CLR_ATTR_SIZE 5

extern const char * const CLR_FG_COLORS[CLR_COLORS_COUNT];
extern const char * const CLR_BG_COLORS[CLR_COLORS_COUNT];
extern const char * const CLR_ATTRS[CLR_ATTR_COUNT];

static FILE * colorie_stream = NULL;


void colorieInit(void);
void colorieSetBgColor(CLRColor color);
void colorieSetFgColor(CLRColor color);
void colorieSetAttr(CLRAttr attr);
void colorieSetBgExtendedColor(int color);
void colorieSetFgExtendedColor(int color);
void colorieSetOutputStream(FILE * stream);
void colorieText(const char * text);
void colorieReset(void);

#endif
