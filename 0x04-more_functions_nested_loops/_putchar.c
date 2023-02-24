#include <unistd.h>


/**
 * _putchar - write the character c to stgout
 *
 * Return:
 */

int _putchar(char c)
{
        return (write(1, &c, 1));
}
