#include <stdio.h>
#include <time.h>
#include <stdlib.h>

int main()
{
	int x, a, b;
	srand(time(NULL));
	x = rand() % 101;
	printf("%d", x);
	a = x % 2;
	b = x % 3;
	if (a == 0)
	{
		printf(" jest podzielna przez 2");
		if (b == 0)
		{
			printf(" oraz jest podzielna przez 3");
		}
		else
		{
			printf(" oraz nie jest podzielna przez 3");
		}
	}
	else
	{
		printf(" nie jest podzielna przez 2");
		if (b == 0)
		{
			printf(" oraz jest podzielna przez 3");
		}
		else
		{
			printf(" oraz nie jest podzielna przez 3");
		}
	}
	return 0;
}