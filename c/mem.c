#include <stdio.h>
#include <stdlib.h>

int main()
{
    int *p;
    p = malloc(sizeof(*p));
    *p = 10;
    printf("%p --> %d\n", p, *p);
    free(p);
    printf("%p --> %d\n", p, *p);
    *p = 20;
    printf("%p --> %d\n", p, *p);
    p = NULL;
    free(p);
    return 0;
}
