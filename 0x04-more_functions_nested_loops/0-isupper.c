#include "main.h"

/**
 * _isupper - checks for uppercase character
 * @c: Variable text
 * Return: 1 for upper letter or 0 for any else
*/

int _isupper(int c)

{
        if (c >= 'A' && c <= 'Z')
        {
        return (1);
        }
	return (0);
}
