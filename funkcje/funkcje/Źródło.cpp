#include <stdio.h>

int mno(int x, int y)
{
	return x * y;
}
int dod(int x, int y)
{
	return x + y;
}

int main()
{
	int x, y, d;
	printf("jakie dzialanie chcesz wykonac? wprowadz 0 by dodac, 1 aby wymnozyc\n");
	scanf_s("%d", &d);
	printf("wprowadz 2 liczby\n");
	scanf_s("%d", &x);
	scanf_s("%d", &y);
	if (d)
	{
		printf("Wynik dodawania to %d\n", dod(x, y));
	}
	else
	{
		printf("Wynik mnozenia to %d\n", mno(x, y));
	}
	return 0;
}