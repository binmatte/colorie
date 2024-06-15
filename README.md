# Colorie: ANSI Colors and Attributes Library for C

This header-only library provides macros for ANSI colors (foreground and background) and text attributes in C programming language. These macros can be used to add color and formatting to text output in terminals that support ANSI escape codes.

# Functions
## Setting Colors and Attributes

* `void colorieSetFgColor(CLRColor color);`
    * Sets the foreground color.
* `void colorieSetBgColor(CLRColor color);`
    * Sets the background color.
* `void colorieSetAttr(CLRAttr attr);`
    * Sets a text attribute (e.g., bold, italic).
* `void colorieSetFgExtendedColor(int color);`
    * Sets the foreground color using an extended palette (0-255).
* `void colorieSetBgExtendedColor(int color);`
    * Sets the background color using an extended palette (0-255).

## Managing Output

* `void colorieSetOutputStream(FILE * stream);`
    * Sets the output stream (default is stdout).
* `void colorieText(const char * text);`
    * Prints text to the selected output stream.
* `void colorieReset(void);`
    * Resets all colors and attributes to default.

# Example

For additional usage examples, refer to example/test.c in this repository.

```c
#include <colorie/colorie.h>

int main(void) {
    // Set foreground color to blue
    colorieSetFgColor(CLR_BLUE);
    // Set background color to yellow
    colorieSetBgColor(CLR_YELLOW);
    // Print some colored text
    colorieText("This text is blue on yellow background!\n");
    // Reset colors to default
    colorieReset();
    return 0;
}
```

# License

This library is licensed under the MIT License. See [LICENSE](LICENSE) for details.

# Contribution

Contributions are welcome! Please feel free to submit pull requests or open issues.