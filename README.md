# ft_printf

`ft_printf` is a project from 42 that consists of reimplementing the standard `printf` function in C, focusing on handling variadic arguments.

## 🛠️ Project Overview

The goal is to create a fully functional version of `printf`, supporting a subset of format specifiers. This includes proper formatting of strings, characters, integers, and hexadecimal values, with precise memory and argument management.

## 📚 Supported Conversions

- `%c` — character  
- `%s` — string  
- `%p` — pointer address  
- `%d` / `%i` — signed decimal integer  
- `%u` — unsigned decimal integer  
- `%x` / `%X` — hexadecimal (lower/upper)  
- `%%` — a literal percent sign

## 💡 Usage

Include the source files in your project and use:

```c
ft_printf("Hello %s!\n", "world");
```

## 🔧 Compilation

Compile with:

```bash
-Wall -Wextra -Werror
```

Use a `Makefile` with the rules: `all`, `clean`, `fclean`, `re`.

## 📌 Notes

- Must handle variadic arguments using `stdarg.h`
- No memory leaks or invalid accesses allowed
- Must conform to the 42 Norm

