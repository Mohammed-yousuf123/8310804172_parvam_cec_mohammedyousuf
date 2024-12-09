//c program to generate fibonacci series of n numbers
#include<stdio.h>
int main()
{
    int i,n;
    int t1=0,t2=1;
    int t3=t1+t2;
    scanf("%d,&n");
    printf("%d,%d",t1,t2);
    for(i=3;i<=n;++i)
    {
        printf("%d",t3);
        t1=t2;
        t2=t3;
        t3=t1+t2;
    }
    return 0;
}