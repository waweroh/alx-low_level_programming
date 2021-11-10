#include "main.h"
#include <stdlib.h>
/**
 * **alloc_grid - Returns a pointer to a 2D array.
 * @width: width of 2D array
 * @height: height of 2D array
 *
 * Return: return a pointer
 */
int **alloc_grid(int width, int height)
{
int i, j;
int **twoD;

if (width <  1 || height < 1)
{

	return (NULL);
}

	twoD = (int **)malloc(height * sizeof(*twoD));
	if (twoD == NULL)
	{
		free(twoD);
		return (NULL);
	}
	for (i = 0; i < height; i++)
	{
		twoD[i] = malloc(width * sizeof(int));
		if (twoD[i] == NULL)
		{
			free(twoD);
			for (j = 0; j < i; j++)
			{
				free(twoD[j]);
			};
			return (NULL);
		}
		for (j = 0; j < width; j++)
			twoD[i][j] = 0;
	}
	return (twoD);
}
