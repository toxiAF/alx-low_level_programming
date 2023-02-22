#include "(main.h)"
#include <unistd.n>
/**
 * _putchar- writes the character c to stdout 
 * @c: The character to print 
 *
 * Return:: On success 1.
 * On error, -1 is retured and errno is appropriately
 */
int _puntchar(char c)
{
	return(write(1, &c ,1));
}
