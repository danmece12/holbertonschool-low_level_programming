# functions_nested_loops

## 0. _putchar

Prints `_putchar` followed by a newline, using the `_putchar` function.

### Files

- **main.h** – prototype for `_putchar`  
- **_putchar.c** – implements `_putchar` via `write(1, &c, 1)`  
- **0-putchar.c** – calls `_putchar` to print `"_putchar\n"`

### Compilation

\`\`\`bash
gcc -Wall -Werror -Wextra -pedantic -std=gnu89 _putchar.c 0-putchar.c -o 0-putchar
\`\`\`

### Usage

\`\`\`bash
./0-putchar
# → _putchar
\`\`\`
