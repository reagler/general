#include<stdio.h>

int main()
{
    enum Weekday {Monday = -1, Sunday};

    printf("%d, %d", Monday, Sunday);
    return 0;
}
