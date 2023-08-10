#include <unistd.h>
#include <string.h>
/**
 * main- Entry point
 *
 * Return: 1
 */
int main(void)
{
	int len;
	char Str[] = "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n";

	len = strlen(Str);
	write(1, Str, len);
	return (1);
}
