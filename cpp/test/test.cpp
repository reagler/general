#include <stdio.h>


void fun(char msg[])
{
	int length = sizeof(msg)/sizeof(msg[0]);
	printf("%d:%d:%d:%s\n",sizeof(msg), sizeof(msg[0]), length, msg);
}
int a(int x=10);
int maiaan()
{
	char msg[] = "hello";
	printf("%d:%d:%d\n", sizeof(msg[0]), sizeof(&msg[0]), sizeof(msg));
	fun(msg);
	a();
	int iv;
	int &reiv = iv;
	printf("%d, %d\n", iv, reiv);
	reiv=3;
	printf("%d, %d, %x, %x\n", iv, reiv, &iv, &reiv);
	return 0;
}

int a(int x )
{
	printf("x=%d\n", x);
	return 0;
}