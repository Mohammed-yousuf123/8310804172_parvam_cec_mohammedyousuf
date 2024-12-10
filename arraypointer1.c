//wap to find smallest no in an array using pointer
#include<stdio.h>
int main()
{
    int size=0,a[100],i,*small=a;
    scanf("%d",&size);
    for(i=0;i<size;scanf("%d",a+i++));
    for(i=0;i<size;i++);
    {
        if(*small>a[i])
        small=&a[i];
    }
    printf("smallest ele is %d",*small);
}