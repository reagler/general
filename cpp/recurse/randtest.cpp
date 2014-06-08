#include <stdio.h>
#include <stdlib.h>

#define LOOP 1000000

int main()
{
	int rgnC = 0;
	for(int i = 0; i < LOOP; i++)
	{
		int x = rand();
		int y = rand();
		if(x*x + y*y < RAND_MAX * RAND_MAX)
		{
			rgnC++;
		}
	}
	printf("%d\n", rgnC);
	return 0;
}