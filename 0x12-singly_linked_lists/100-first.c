#include <stdio.h>
/**
 * execute_before_main - Prints a string before main executes
 *
 * Return: Nothing
 */
void __attribute__((constructor)) execute_before_main(void);

void execute_before_main(void)
{
	printf("You're beat! and yet, you must allow,\n");
	printf("I bore my house upon my back!\n");
}
