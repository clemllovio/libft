# Libft
libft is a project that recreates several standard C library functions, as well as extra functions that might be useful for future projects. This library serves as a foundation for C programming and helps in understanding the inner workings of common functions.
## Installation
To use this library in your project:
  1. Clone the repository:
     ```bash
      git clone https://github.com/clemllovio/libft.git
     ```
  2. Navigate to the project directory and compile the library:
     ```bash
     cd libft
     make
     ```
  3. To compile with bonus function:
     ```bash
     make bonus
     ```
## Usage
After compiling, you'll have a `libft.a` static library. To use it in your projects:
  1. Include the header in your C files:
     ```c
     #include "libft.h"
     ```
  2. ou can now use any function from libft in your code. For example:
     ```c
     char *str = ft_strdup("Hello, World!");
     int len = ft_strlen(str);
     ft_putendl_fd(str, 1);
     ```

Refer to the `libft.h` header file for a complete list of available functions and their prototypes.

Note: Make sure to free any memory allocated by functions like ft_strdup to avoid memory leaks.

### Bonus functions
If you've compiled the library with `make bonus`, you can use additional functions (including linked list operations) by simply including the `libft.h` header.

## Credits
Credits
This project was developed by Clémence Llovio as part of the curriculum at 42 School.
