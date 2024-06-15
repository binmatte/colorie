#include "colorie/colorie.h"

int main() {
    colorieSetFgColor(CLR_COLOR_RED);
    colorieText("This is red text.\n");

    colorieSetBgColor(CLR_COLOR_BLUE);
    colorieText("This is red text on blue background.\n");

    colorieReset();

    colorieText("Colors reset to default.\n");

    colorieSetFgExtendedColor(208);
    colorieText("This is text with extended orange foreground color.\n");

    colorieSetBgExtendedColor(93);
    colorieText("This is text with extended orange foreground and purple background.\n");

    colorieReset();
    colorieText("Extended colors reset to default.\n");

    colorieSetAttr(CLR_ATTR_BOLD);
    colorieText("This is bold text.\n");

    colorieSetAttr(CLR_ATTR_UNDERLINE);
    colorieText("This is bold and underlined text.\n");

    colorieReset();
    colorieText("Text attributes reset to default.\n");

    colorieSetOutputStream(stdout);
    colorieText("Output stream reset to stdout.\n");

    colorieSetOutputStream(stderr);
    colorieText("This text is printed to stderr.\n");

    return 0;
}