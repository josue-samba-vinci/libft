*This project has been created as part of the 42 curriculum by josamba-.*

# libft

## Description

libft is a custom C library built from scratch as part of the 42 curriculum. The goal is to reimplement a set of standard C library functions, as well as additional utility functions, in order to build a solid foundation for future projects. This library will be reused throughout the entire 42 curriculum.

The library is divided into three parts:

**Part 1 — Libc functions:** Reimplementations of standard C library functions with the `ft_` prefix. These functions behave identically to their originals as described in the man pages.

**Part 2 — Additional functions:** Utility functions not found in the standard library, or existing in a different form, designed to complement Part 1.

**Part 3 — Linked list:** A set of functions to manipulate singly linked lists using the `t_list` structure.

### Function reference

#### Part 1 — Libc functions

| Function | Description |
|---|---|
| `ft_isalpha` | Checks if a character is alphabetic |
| `ft_isdigit` | Checks if a character is a digit |
| `ft_isalnum` | Checks if a character is alphanumeric |
| `ft_isascii` | Checks if a character is in the ASCII table |
| `ft_isprint` | Checks if a character is printable |
| `ft_strlen` | Returns the length of a string |
| `ft_memset` | Fills memory with a constant byte |
| `ft_bzero` | Sets memory to zero |
| `ft_memcpy` | Copies memory area |
| `ft_memmove` | Copies memory area, handling overlap |
| `ft_strlcpy` | Size-bounded string copy |
| `ft_strlcat` | Size-bounded string concatenation |
| `ft_toupper` | Converts a character to uppercase |
| `ft_tolower` | Converts a character to lowercase |
| `ft_strchr` | Locates first occurrence of a character in a string |
| `ft_strrchr` | Locates last occurrence of a character in a string |
| `ft_strncmp` | Compares two strings up to n characters |
| `ft_memchr` | Searches for a byte in memory |
| `ft_memcmp` | Compares two memory areas |
| `ft_strnstr` | Locates a substring in a string, up to n characters |
| `ft_atoi` | Converts a string to an integer |
| `ft_calloc` | Allocates and zeroes memory |
| `ft_strdup` | Duplicates a string |

#### Part 2 — Additional functions

| Function | Description |
|---|---|
| `ft_substr` | Returns a substring from a string |
| `ft_strjoin` | Concatenates two strings into a new one |
| `ft_strtrim` | Trims characters from both ends of a string |
| `ft_split` | Splits a string by a delimiter into an array |
| `ft_itoa` | Converts an integer to a string |
| `ft_strmapi` | Applies a function to each character of a string |
| `ft_striteri` | Applies a function to each character of a string in place |
| `ft_putchar_fd` | Outputs a character to a file descriptor |
| `ft_putstr_fd` | Outputs a string to a file descriptor |
| `ft_putendl_fd` | Outputs a string followed by a newline to a file descriptor |
| `ft_putnbr_fd` | Outputs an integer to a file descriptor |

#### Part 3 — Linked list

| Function | Description |
|---|---|
| `ft_lstnew` | Creates a new list node |
| `ft_lstadd_front` | Adds a node at the beginning of a list |
| `ft_lstsize` | Counts the number of nodes in a list |
| `ft_lstlast` | Returns the last node of a list |
| `ft_lstadd_back` | Adds a node at the end of a list |
| `ft_lstdelone` | Frees a single node's content and the node itself |
| `ft_lstclear` | Frees all nodes of a list |
| `ft_lstiter` | Applies a function to each node's content |
| `ft_lstmap` | Creates a new list by applying a function to each node |

---

## Instructions

### Compilation

```bash
make
```

This will compile all source files and generate `libft.a` at the root of the repository.

### Available Makefile rules

| Rule | Action |
|---|---|
| `make` / `make all` | Compiles the library |
| `make clean` | Removes object files |
| `make fclean` | Removes object files and `libft.a` |
| `make re` | Runs `fclean` then `all` |

### Usage

To use the library in another project, include the header and link against the archive:

```c
#include "libft.h"
```

```bash
gcc -Wall -Wextra -Werror your_file.c -L. -lft
```

---

## Resources

- `man` pages for all reimplemented functions (`man strlen`, `man atoi`, etc.)
- [42 Norm](https://github.com/42School/norminette) — coding standard enforced throughout the project