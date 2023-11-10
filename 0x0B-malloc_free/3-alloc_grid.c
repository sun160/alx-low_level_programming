#include "main.h"

/**
 * alloc_grid - function that returns a pointer to a 2 dimensional array
 *
 * @width: int
 * @height: int
 *
 * Return: 2 dimensional array
*/

int **alloc_grid(int width, int height)
{
	int **tab, d, e;

	tab = malloc(sizeof(*tab) * height);

	if (width <= 0 || height <= 0 || tab == 0)
	{
		return (NULL);
	}
	else
	{
		for (e = 0; e < height; e++)
		{
			tab[e] = malloc(sizeof(**tab) * width);
			if (tab[e] == 0)
			{
				while (e--)
					free(tab[e]);
				free(tab);
				return (NULL);
			}
			for (d = 0; d < width; d++)
				tab[e][d] = 0;
		}
	}
	return (tab);
}
