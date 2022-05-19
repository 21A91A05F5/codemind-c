#include<stdio.h>
int palindrome(int num)
{
    int m,r=0,d;
    m=num;
    while(num!=0)
    {
        d=num%10;
        num=num/10;
        r=r*10+d;
    }
    if(r==m)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}
int main()
{
    int n,i,c=0,arr[100];
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(i=0;i<n;i++)
    {
        if(palindrome(arr[i]))
        {
            c++;
        }
    }
    printf("%d",c);
}