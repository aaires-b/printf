## PRINTF

## Introduction

HI! This is my **ft_printf** project at 42 school ! The aim of printf is to mimic the function printf from the standard c library . This will be very useful in future projects that we aren’t allowed to use the libc function. Also , it will help us get around with the standard argument (stdarg) library and its macros.

## Project Description

In this project, you are tasked with replicating a function (printf) found in the standard C library (libc). Your **ft_printf** should be able to replace the standard function, and it should carefully tested.

## Variadic functions (const char *str, …)

A variadic function is a function that can accept a variable number of arguments.

### <Stdarg.h> (lets us work with variadic functions by providing macros and types)

- **va list** :  special type that stores the information needed to access the variable arguments in a variadic function. Variables of this type  are used to access the variable argument list.
- **va start** : Macro that initializes the **va list** variable for us to be able to access the arguments. It receives as arguments the **va list variable** and the last parameter of the function printf.
- **va arg** : Macro used to access the next argument of the list. This macro returns the value of the present argument and  moves on to the next argument on the list. It receives as argument the va list variable and the type of the argument , depending on the format that we wanna print it.
- **va end** : Macro that cleans the list after we have used it . It receives as argument only the **va list** variable.

### Format Specifiers

- **%d / %i :** Prints an integer in signed decimal format.
- **%u** : Prints an integer in unsigned decimal format.
- **%x / %X** : Prints an integer in hexadecimal format (lowercase or uppercase).
- **%c :** Prints a single character.
- **%s** : Prints a string of characters.
- **%%:**  Prints a literal '%' character.
- **%p:**  Prints a pointer address in hexadecimal format.
