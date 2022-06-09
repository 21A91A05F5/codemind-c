#include<stdio.h>
int self_dividing(int num)
{
    int h,d,p=0,c=0;
    h=num;
    while(num)
    {
        d=num%10;
        num=num/10;
        c++;
        if(d!=0 && h%d==0)
        {
            p++;
        }
    }
    if(c==p)
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
    int n,m,k,i;
    scanf("%d%d",&n,&m);
    for(i=n;i<m+1;i++)
    {
        k=self_dividing(i);
        if(k==1)
        {
            printf("%d ",i);
        }
    }
}