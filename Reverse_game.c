#include<stdio.h>
int reverse(int num)
{
    int m,r=0,d;
    m=num;
    while(num!=0)
    {
        d=num%10;
        num=num/10;
        r=r*10+d;
    }
    return r;
}
int main()
{
    int n,i,c=0,arr[100],r;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(i=0;i<n;i++)
    {
        r=(reverse(arr[i]));
        printf("%d ",r);
    }
}