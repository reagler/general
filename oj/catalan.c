#include <stdio.h>

long long cata[38] = {0, 1, 1};

void catalan() {
	for (int i = 3; i < 38; i++) {
		cata[i] = 0;
		for (int j = 1; j < i; j++) {
			cata[i] += cata[j] * cata[i - j];
		}
	}
}

int main()
{
	int n, t = 1;
	catalan();
	while (scanf("%d", &n) && n != -1) {
		printf("%d %d %lld\n", t++, n, 2 * cata[n + 1]);
	}
	return 0;
}