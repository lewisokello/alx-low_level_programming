#include <stdlib.h>
/**
 * _calloc - allocates memory for an array, using malloc.
 *
 * @nmemb: array.
 * @size: size of elements.
 *
 * Return: pointer to the array, or NULL if it fails.
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
char *arr;
unsigned int i;

if (nmemb == 0 || size == 0)
return (NULL);

arr = malloc(nmemb * size);

if (!arr)
return (NULL);

for (i = 0; i < nmemb * size; i++)
arr[i] = 0;

return (arr);
}
