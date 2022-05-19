#include<stdio.h>
int is_prime(int num)
{
    int i,p=0;
    for(i=1;i<=num;i++)
    {
        if(num%i==0)
        {
            p++;
        }
    }
    if(p==2)
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
    int n,i,arr[100],k=0,p;
    float sum=0,avg;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(i=0;i<n;i++)
    {
        p=is_prime(arr[i]);
        if(p==1)
        {
            k++;
            sum=sum+arr[i];
        }
    }
    avg=(float)sum/k;
    printf("%.2f",avg);
}