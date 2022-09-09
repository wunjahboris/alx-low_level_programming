<<<<<<< HEAD
#include <stdlib.h>
=======
include <stdlib.h>
>>>>>>> 5ea310de0a99c896f61da19753f1cf73f5695c75
#include <time.h>
/* more headers goes there */

/* betty style doc for function main goes there */
int main(void)
{
		int n;

			srand(time(0));
				n = rand() - RAND_MAX / 2;
				if (n > 0)
					printf("%d is positive\n", n);
				else if (n == 0)
					printf("%d is zero\n", n);
				else
					printf("%d is negative\n", n);

					/* your code goes there */
					return (0);
}
