#include<stdio.h>
int main()
{
    int i,j,r,c,arr[100][100],s=0,p=0;
    scanf("%d%d",&r,&c);
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            scanf("%d",&arr[i][j]);
        }
    }
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            if(i%2==0)
            {
                s=s+arr[i][j];
            }
            else if(i%2)
            {
                p=p+arr[i][j];
            }
        }
    }
    printf("%d %d",s,p);
}