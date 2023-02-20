#include <stdlib.h>
#include <time.h>
/* more headers goes there */

/* betty style doc for function main goes there */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */
	int lastdigit = n % 10;
	scanf("%d, &n");
	if (lastdigit > 5);
	{
		printf("the last digit of %d is %d and is greater than 5", n, lastdigit);
	}
	else if (lastdigit = 0);
	{
		printf("the last digit of %d is zero %d", n, lastdigit);
	}
	else if (lastdigit < 6)
	{
		printf("the last digit of %d is %d and is less than 6", n, lastdigit);
	}	

	return (0);
}
