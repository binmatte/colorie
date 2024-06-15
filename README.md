# Colorie: ANSI Colors and Attributes Library for C

This header-only library provides macros for ANSI colors (foreground and background) and text attributes in C programming language. These macros can be used to add color and formatting to text output in terminals that support ANSI escape codes.

# Usage

### 1. Including Directly in Your Project

#### Step 1: Download `colorie.h` using `wget`

You can download the [colorie.h](include/colorie/old.h) header file using `wget` or `curl`
```shell
wget https://raw.githubusercontent.com/binmatte/colorie/main/colorie.h
```

```c
#include "colorie.h"

int main(void) {
    // Use ANSI color and attribute macros here
    printf(ANSI_FG_GREEN "This text is green!" ANSI_RESET "\n");
    return 0;
}
```

# Example

For additional usage examples, refer to example/test.c in this repository.

# License

This library is licensed under the MIT License. See [LICENSE](LICENSE) for details.

# Contribution

Contributions are welcome! Please feel free to submit pull requests or open issues.