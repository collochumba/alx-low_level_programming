#include <stdio.h>
#include <unistd.h>

/**
 * main-prints exactly "and that piece of act is usefull"
 * - Collins Chumba, 2022-07-01",
 * followed by a newline, to the standard error.
 * Return: i if succes.
 */
int main(void)
{
	write(2, "and that piece of art is useful\" - Dora korpar, 2015-10-19\n", 59);
	return (1);
}
