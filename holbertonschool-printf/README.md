Here’s a clean README.md you can drop into your holbertonschool-printf/ project.

⸻

_printf

A tiny re-implementation of C’s printf that writes to stdout using only write(2).
This version supports the conversion specifiers:
	•	%c — character
	•	%s — string (prints (null) when the pointer is NULL)
	•	%% — prints a literal %

Return value: number of characters printed (excluding the final null byte), or -1 on error.

⸻

Prototype

int _printf(const char *format, ...);


⸻

Build

gcc -Wall -Werror -Wextra -pedantic -std=gnu89 -Wno-format \
    _printf.c main.c -o printf_test

	•	-Wno-format is recommended when comparing with the system printf in the same test file.

⸻

Usage

#include "main.h"

int main(void)
{
    int len = _printf("Hello %s %c %%\n", "world", '!');
    _printf("len=[%d]\n", len); /* <- %d is not implemented; keep tests to %c, %s, %% */
    return (0);
}

Output:

Hello world ! %


⸻

Behavior & Edge Cases
	•	Unsupported specifiers (anything not c, s, %) are printed as the two characters '%X' (e.g., %q).
	•	format == NULL → returns -1.
	•	Lone % at end of string (e.g., "abc%") → returns -1.
	•	NULL string argument for %s → prints (nil).

⸻

Files

holbertonschool-printf/
├── _printf.c        // implementation
├── main.h           // prototype and minimal includes
└── README.md

_printf.c (design)
	•	Minimal helpers:
	•	_putc(char) — writes one byte with write(2)
	•	_puts(const char *) — writes a C string ((nil) if NULL)
	•	Dispatcher for c, s, and % to keep functions short and Betty-compliant.

⸻

Constraints (Holberton)
	•	No use of the C library printf buffer handling.
	•	Only allowed system call is write.
	•	Code follows Betty style & documentation.
	•	Compiles with gcc -Wall -Werror -Wextra -pedantic -std=gnu89.

⸻

Testing

Compare with the system printf for the supported specifiers:

#include <stdio.h>
#include "main.h"

int main(void)
{
    int a = _printf("X[%c] S[%s] P[%%]\n", 'A', "str");
    int b = printf   ("X[%c] S[%s] P[%%]\n", 'A', "str");
    printf("_printf=%d, printf=%d\n", a, b);
    return (0);
}

Build:

gcc -Wall -Werror -Wextra -pedantic -std=gnu89 -Wno-format \
    _printf.c test.c -o test && ./test


⸻

Limitations / Next Steps
	•	Only %c, %s, and %% are implemented (per task 0).
	•	No flags, width, precision, length modifiers, or other specifiers (d, i, u, x, etc.).
	•	Extending is straightforward: add handlers and route from the dispatcher.

⸻

Quick Git

git add README.md
git commit -m "Add README for _printf project"
git push


⸻

If you want this tailored to your exact filenames or to include later tasks/specifiers, say the word and I’ll expand it.