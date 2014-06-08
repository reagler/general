#include <stdio.h>
#include <string.h>
#include <malloc.h>

void GetMsg(char *&msg)
{
	msg = (char *)malloc(100);
	strcpy(msg, "my world.\n");
}

void main1()
{
	char *pMsg = "hello, world.\n";
	GetMsg(pMsg);
	printf("%s", pMsg);
}
