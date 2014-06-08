#include <stdio.h>
#include <string.h>
#include <malloc.h>

void GetMsg(char msg[100])
{
	memset(msg, 'a', 100);
}

int main4()
{
	char msg[101] = {};
	GetMsg(msg);
	printf("%s\n", msg);
	return 0;
}
