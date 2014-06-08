#include <stdio.h>
#include <string.h>
#include <malloc.h>

char *GetMsg()
{
	char *pMsg = "my world.\n";
	return pMsg;
}

void main2()
{
	char *pMsg = GetMsg();
	printf("%s", pMsg);
}
