#include<stdio.h>
int main()
{
    int size=0,a[100],i,esum=0,osum=0;
    scanf("%d",&size);
    for(i=0;i<size;scanf("%d",&a[i++]));
    for(i=0;i<size;i++)
    {
        printf("%d",a[i]);
        if(a[i]%2==0)
        esum+=a[i];
        else 
        osum+=a[i];
    }
    printf("sum of even %d odd %d",esum,osum);
} 
