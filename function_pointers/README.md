## Function pointers

## Overview

In this exercise, you will implement a function that prints a name using a callback function (pointer to function). You will learn how to:

* Declare and use function pointers in C.
* Pass functions as arguments (callbacks).
* Safely invoke function pointers with `NULL` checks.
* Organize code into `.c` and `.h` files with include guards.

## Files

* `function_pointers.h` - Header file with include guards and the prototype for `print_name`.
* `0-print_name.c`     - Implementation of `print_name` with `NULL` checks.
* `0-main.c`           - Driver program that defines two callback functions and tests `print_name`.

## Requirements

1. **Function prototype**:

   ```c
   void print_name(char *name, void (*f)(char *));
   ```
2. **Behavior**:

   * If `name` and `f` are both non-NULL, call `f(name)`.
   * Otherwise, do nothing and return immediately.

## Compilation & Usage

```bash
gcc -Wall -Werror -Wextra -pedantic -std=gnu89 \
    0-main.c 0-print_name.c -o print_name
./print_name
```

Expected output:

```
Hello, my name is Bob Dylan
Hello, my uppercase name is BOB DYLAN
```

## Testing Edge Cases

* **Valid callback**:

  ```c
  print_name("Hodor", print_name_uppercase);
  ```

  Should print:

  ```
  HODOR
  ```

Hello, my uppercase name is HODOR

````

- **NULL callback**:
```c
print_name("Hodor", NULL);
````

Should produce **no output** (and no crash).

---

Follow Betty style guidelines for code formatting and documentation comments.
