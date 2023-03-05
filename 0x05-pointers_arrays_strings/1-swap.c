#include "main.h"
This line includes the main.h header file, which contains the prototype for the swap_int function.
/**
 * swap_int - swaps the values of two integers
 * @a: integer to swap
 * @b: integer to swap
 */
This is a documentation comment that describes what the swap_int function does. The comment includes the name of the function, a brief description, and the parameter descriptions.
void swap_int(int *a, int *b)
This line defines the swap_int function. It takes two integer pointers as its parameters, a and b, which are denoted by the int *a and int *b syntax. The function returns nothing, which is indicated by the void keyword.
{
    int m;

    m = *a;
    *a = *b;
    *b = m;
}
