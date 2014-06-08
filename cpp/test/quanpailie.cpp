#include <iostream>

int swap(int &a, int &b)
{
	int temp = a;
	a = b;
	b = temp;
	return 0;
}

int perm(int num[], int s, int e)
{
	if (s == e)
	{
		for(int i = 0; i <= e; i++)
		{
			printf("%d ", num[i]);
		}
		printf("\n");
		return 0;
	}
	for(int i = s; i <= e; i++)
	{
		swap(num[s], num[i]);
		perm(num, s+1, e);
		swap(num[s], num[i]);
	}
}

int mbgfvain()
{
	int num[5] = {1,2,3,4,5};
	perm(num, 0, 4);
	char *p ="afdsfads";
	p = "fdasfdas";
	
	printf("%c\n",p[0]);
	return 0;
}
