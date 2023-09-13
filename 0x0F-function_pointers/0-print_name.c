#include "function_pointers.h"
/**
 * print_name - Prints name.
 * @name: String to be printed
 * @f: Function pointer to called functions
 *
 * Return: Nothing
 */
void print_name(char *name, void (*f)(char *))
{
	if (name != NULL && f != NULL)
		f(name);
}
