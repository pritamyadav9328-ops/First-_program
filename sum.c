#include<stdio.h>
int main()
{
    int n,i;
    int sum=0;
    printf("enter a postive integer:");
    scanf("%d",&n);
    for(i=1;i<n;i++)
    {
        sum+=i;
    }
    printf("sum of the first %d number is:%d\n",n,sum);
    return 0;
    
}