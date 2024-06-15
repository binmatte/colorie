#include "colorie/colorie.h"
#include <stdio.h>

const char * const CLR_FG_COLORS[CLR_COLORS_COUNT] = {
        CLR_ANSI_FG_BLACK,
        CLR_ANSI_FG_RED,
        CLR_ANSI_FG_GREEN,
        CLR_ANSI_FG_YELLOW,
        CLR_ANSI_FG_BLUE,
        CLR_ANSI_FG_MAGENTA,
        CLR_ANSI_FG_CYAN,
        CLR_ANSI_FG_WHITE
};

const char * const CLR_BG_COLORS[CLR_COLORS_COUNT] = {
        CLR_ANSI_BG_BLACK,
        CLR_ANSI_BG_RED,
        CLR_ANSI_BG_GREEN,
        CLR_ANSI_BG_YELLOW,
        CLR_ANSI_BG_BLUE,
        CLR_ANSI_BG_MAGENTA,
        CLR_ANSI_BG_CYAN,
        CLR_ANSI_BG_WHITE
};

const char * const CLR_ATTRS[CLR_ATTR_COUNT] = {
        CLR_ANSI_BOLD,
        CLR_ANSI_DIM,
        CLR_ANSI_ITALIC,
        CLR_ANSI_UNDERLINE,
        CLR_ANSI_BLINK,
        CLR_ANSI_INVERT,
        CLR_ANSI_HIDDEN,
        CLR_ANSI_STRIKE
};

static void coloriePrint(const char * text) {
    if (colorie_stream == NULL) {
        fprintf(stdout, "%s", text);
    } else {
        fprintf(colorie_stream, "%s", text);
    }
}

void colorieSetBgColor(CLRColor color) {
    coloriePrint(CLR_BG_COLORS[color]);
}

void colorieSetFgColor(CLRColor color) {
    coloriePrint(CLR_FG_COLORS[color]);
}

void colorieSetAttr(CLRAttr attr) {
    coloriePrint(CLR_ATTRS[attr]);
}

void colorieSetBgExtendedColor(int color) {
    char bg_extended[15];
    snprintf(bg_extended, sizeof(bg_extended), "\033[48;5;%dm", color);
    coloriePrint(bg_extended);
}

void colorieSetFgExtendedColor(int color) {
    char fg_extended[15];
    snprintf(fg_extended, sizeof(fg_extended), "\033[38;5;%dm", color);
    coloriePrint(fg_extended);
}

void colorieSetOutputStream(FILE * stream) {
    colorie_stream = stream;
}

void colorieText(const char * text) {
    coloriePrint(text);
}

void colorieReset(void) {
    coloriePrint(CLR_ANSI_RESET);
}