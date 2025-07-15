#include "function_pointers.h"
#include <stddef.h>


/**
 * print_name - Write a function that prints a name.
 *
 * @name: name of.
 * @f: function pointer.
 *
 *
 * Return: the name.
 *
 *
 */

void print_name(char *name, void (*f)(char *))
{
if (f != NULL)
f(name);
}
