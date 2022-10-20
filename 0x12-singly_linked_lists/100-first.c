#include <stdio.h>

void _attribute_((constructor)) hare(void);

/**
*bmain - function executed before main
*Return: no return
*/

void hare(void)
{
	printf("You're beat! and yet, you must allow, \n"
		"I bore my house upon my back!\n");
}
