#include <stdio.h>

/**
*main - prints the name of the file from wjich the program was compiled from followed by a new line
*
*Return always 0
*/
int main(void)
{
	printf("%s\n", _FILE_);

	return (0);
}
