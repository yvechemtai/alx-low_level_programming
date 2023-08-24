#include <stdlib.h>

/**
 * malloc - allocate memory
 * @size: size of memory to allocate
 * Return: pointer to allocated memory, or NULL if failed
 */
void *malloc(size_t size)
{
	/* Override malloc() to do nothing */
	(void)size;
	return (NULL);
}

/**
 * rand - get random number
 * Return: always return 9
 */
int rand(void)
{
	/* Override rand() to always return the winning numbers */
	return (9);
}
