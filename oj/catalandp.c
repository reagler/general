#include <stdio.h>

long long cata[38][38];

void catalan() {
	for (int i = 0; i < 38; i++) {
		cata[0][i] = 1;
	}
	for (int i = 1; i < 38; i++)
	{
		for (int j = i; j < 38; j++)
		{
			if (i == j)
				cata[i][j] = cata[i-1][j];
			else
				cata[i][j] = cata[i-1][j] + cata[i][j-1];
		}
	}
	for (int i = 0; i < 6; ++i)
	{
		for (int j = 0; j < 6; ++j)
		{
			printf("%3lld", cata[i][j]);
		}
		printf("\n");
	}
}

int main()
{
	int n, t = 1;
	catalan();
	while (scanf("%d", &n) && n != -1) {
		printf("%d %d %lld\n", t++, n, 2 * cata[n][n]);
	}
	return 0;
}