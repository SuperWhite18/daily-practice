#include <stdio.h>
#include<math.h>
int main()
{
	int i, j, k = 0;
	for (i = 100; i <= 200; i++)
		for (j = 2; j <= sqrt(i); j++)//sqrt 开平方根
			if (i % j == 0)
				break;
			else if (j > sqrt(i) - 1)
			{
				printf("%d,"i);
				k++;
				if (k % 5 == 0)
					printf("\n");
			}
			else
				continue;
	return 0;
}
