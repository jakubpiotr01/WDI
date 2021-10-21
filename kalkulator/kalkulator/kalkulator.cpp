#include <stdlib.h>
#include <stdio.h>

int main()
{
    printf("START\n");
    int x = 5, y = 7, z = 10;
    int wynik = x + y + z;
    printf("wynik dodania %d,%d i %d to %d\n", x, y, z, wynik);
    wynik = x * y * z;
    printf("wynik mnozenia %d,%d i %d to %d\n", x, y, z, wynik);
    printf("KONIEC");
    return 0;
}

