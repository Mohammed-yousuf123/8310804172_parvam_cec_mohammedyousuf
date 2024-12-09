#include<stdio.h>
long summ(int );
int main()
{
    int n=0;
    scanf("%d",&n);
    printf("%d is %1d",summ(n));
}
long summ(int no)
{
    if(no<=0)return 0;
    if (no==1)return 1;
    return no+summ(no-1);
}