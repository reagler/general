#include <stdio.h>

int main()
{
	int a, b;
	while(EOF != scanf("%d%d", &a, &b))
	{
		printf("%d %d\n", a, b);
	}
	return 0;
}