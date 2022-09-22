#include "main.h"
#include <stdio.h>

/**
*print_buffer - prints a buffer
*@b: buffer
*@size: size of buffer
*Return: no return
*/
void print_buffer(char *b, int size)
{
	int j, k, l;

	if (size <= 0)
		print("\n");
	else
	{
		for (j = 0; j < size; j += 10)
		{
			print("%.8×:", j);
			for (k = j; k < j + 10; k++)
			{
				if (k % 2 == 0)
					printf(" ");
				if (k < size)
					printf("%.2×", *(b + k);
				else
					printf(" ");
			}
			printf(" ");
			for (l = j; l < j + 10; l++)
			{
				if (l >= size)
					break;
				if (*(b + l) < 32 || *(b + 1) > 126)
					printf("%c", '.');
				else
					printf("%c", *(b + 1));
			}
			printf("\n");
		}
	}
}
