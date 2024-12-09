#include<stdio.h>
int main()
{
    int limit;
    printf("enter the limit for the series:");
    scanf("%d",&limit);
    printf("the series of perfect square up to %d is:\n",limit);
    for(int i=1;i*i<=limit;i++)
    {
        printf("%d",i*i);
    }
    printf("\n");
    return 0;
}