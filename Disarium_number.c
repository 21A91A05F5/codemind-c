#include<stdio.h>
#include<math.h>
int digitcount(int num)
{
    int c=0,rem;
    while(num!=0)
    {
        rem=num%10;
        num=num/10;
        c++;
    }
    return c;
}
int main()
{
    int n,c,sum=0,m,rem;
    scanf("%d",&n);
    m=n;
    c=digitcount(n);
    while(n!=0)
    {
        rem=n%10;
        n=n/10;
        sum=sum+pow(rem,c);
        c--;
    }
    if(sum==m)
    {
        printf("True");
    }
    else
    {
        printf("False");
    }
}