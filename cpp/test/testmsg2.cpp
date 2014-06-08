#include <stdio.h>
#include <string.h>
#include <malloc.h>

void GetMsg(char *msg)
{
	msg = (char *)malloc(100);
	strcpy(msg, "world.\n");
}

void main3()
{
	char *msg = "hello.";
	GetMsg(msg);
	strcpy(msg, "hello, world.");
	printf("%s", msg);
	delete msg;
}
