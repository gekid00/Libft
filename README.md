# Libft

A custom C library reimplementing standard libc functions along with additional
utility functions for strings, memory, output, and linked lists.
Built as part of the 42 school curriculum.

## Technologies

- C (compiled with `cc`)
- Makefile
- Standard headers: `stdlib.h`, `unistd.h`, `stddef.h`

## Build Instructions

```bash
make          # Build libft.a
make bonus    # Build with linked list functions
make clean    # Remove object files
make fclean   # Remove object files and libft.a
make re       # Full rebuild
```

Compilation flags: `-Wall -Wextra -Werror`

## Usage

Include the header and link the library when compiling your project:

```c
#include "libft.h"
```

```bash
gcc main.c -L/path/to/libft -lft -o program
```

### Example

```c
#include "libft.h"

int main(void)
{
    char **words = ft_split("hello world foo", ' ');
    int   len    = ft_strlen(words[0]); // 5
    ft_putstr_fd(words[0], 1);          // prints "hello"
    return (0);
}
```

## Key Technical Concepts

- **Libc re-implementation**: character checks (`is*`), string manipulation
  (`strlen`, `strlcpy`, `strlcat`, `split`, `substr`, `strtrim`, `strjoin`),
  memory operations (`memset`, `memcpy`, `memmove`, `calloc`), and conversion
  functions (`atoi`, `itoa`).
- **File descriptor output**: `ft_putchar_fd`, `ft_putstr_fd`, `ft_putendl_fd`,
  `ft_putnbr_fd` write to arbitrary file descriptors.
- **Singly linked list (bonus)**: node creation, insertion, deletion, iteration,
  and mapping (`ft_lstmap`) with proper cleanup on allocation failure.
- **Strict memory management**: every allocation is guarded; partial allocations
  are freed on error (e.g., `ft_split`, `ft_lstmap`).
