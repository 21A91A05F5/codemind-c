#include<stdio.h>
#include<math.h>
int main()
{
    int n,i,sum=0,arr[100],k=0,p;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(i=0;i<n/2;i++)
    {
        k=k+arr[i];
    }
    for(i=0;i<n;i++)
    {
       sum=sum+arr[i];
    }
    p=sum-k;
    printf("%d
",k);
    printf("%d",p);
}