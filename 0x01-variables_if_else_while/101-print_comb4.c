#include <stdio.h>
/**
 * a program that prints all
 * possible combinations of 
 * three digit numbers
 */
int main(void)
{
	int i, j, k;
	int arr{3};

	printf("Enter the first number : ");
	scanf("%d", &arr[0]);
	printf("ENter the second number : ");
	scanf("%d", &arr[1]);
	printf("Enter the third number : ");
	scanf("%d", &arr[2]);

	for (i = 0; i < 3; i++)
	{
		for (j = 0; j < 3; j++)
		{
			for (k = 0; k < 3; k++)
			{
				if (i != j && j != k && k != i)
				{
					printf("[%d %d %d]\n", arr[i], arr[j], arr[k]);
				}
			}
		}
	}
}
