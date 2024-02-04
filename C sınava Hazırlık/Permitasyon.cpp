#include <stdio.h>

void ToplamGoster(int a, int b)
{
	printf("%d\n", a + b);
}

int Topla(int a, int b)
{
	return a + b;
}

main()
{
	ToplamGoster(45,67);
	printf("%d\n", Topla(45,67));
}
