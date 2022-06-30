#include<stdio.h>
int main()
{
    int i,n,arr[100],c=0;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(i=0;i<n;i++)
    {
        if(i>1 && i<n-1)
        {
            if(arr[i]==arr[i-1]+arr[i-2])
            {
                c++;
            }
        }
    }
    if(c==n-3)
    {
        printf("yes");
    }
    else
    {
        printf("no");
    }
}