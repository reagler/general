#include <stdio.h>
void ReverArrayN(int a[],int n, int k)
{
    int i;
    for( i=0; i<n; i++ )
    {
        printf("%d ",a[i]);
    }
    printf("\n");
    for( i=0; i<k/2; i++ )//三个for函数可以写成一个函数的，其实
    {
        a[i] = a[i]^a[k-1-i];
        a[k-1-i] = a[i]^a[k-1-i];;
        a[i] = a[i]^a[k-1-i];
    }
    for( i=0; i<n; i++ )
    {
        printf("%d ",a[i]);
    }
    printf("\n");
    for( i=k; i<(k+n)/2; i++ )
    {
        a[i] = a[i]^a[n-1-(i-k)];
        a[n-1-(i-k)] = a[i]^a[n-1-(i-k)];
        a[i] = a[i]^a[n-1-(i-k)];
    }
    for( i=0; i<n; i++ )
    {
        printf("%d ",a[i]);
    }
    printf("\n");
    for( i=0; i<n/2; i++)
    {
        a[i] = a[i]^a[n-1-i];
        a[n-1-i] = a[i]^a[n-1-i];
        a[i] = a[i]^a[n-1-i];
    }
} 
int main(int argc, char *argv[])
{
    int a[] = {1,2,3,4,5,6,7,8};
    int i;
    ReverArrayN(a, sizeof(a)/sizeof(int), 3);
    for( i=0; i<sizeof(a)/sizeof(int); i++ )
    {
        printf("%d ",a[i]);
    }
    return 0;
}
