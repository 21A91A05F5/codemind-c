#include<stdio.h>
int digit_count(int num)
{
    int m,s=0,d;
    m=num;
    while(num!=0)
    {
        d=num%10;
        num=num/10;
        s=s+d;
    }
    return s;
}
int main()
{
    int n,i,arr[100],s,sum=0;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(i=0;i<n;i++)
    {
        s=digit_count(arr[i]);
        sum=sum+s;
    }
    printf("%d ",sum);
}