#include <stdlib.h>
#include <stdio.h>

int main()
{
	printf("spis liczb od 0 do 100 niepodzielnych przez 13:\n");
	int x = 0;
	for (x = 0; x <= 100; x++)
	 { 
		int a = x % 13;
		if (a == 0)
		{
			continue;
		}
		printf("%d\n", x);
	 }
	return 0;
}