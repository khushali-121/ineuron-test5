//print the table of N number
#include<stdio.h>
int main()
{
    int i,j,n,k=10;
    printf("Enter a number=");
    scanf("%d",&n);
    for(i=1;i<=k;i++)
    {
    j=n*i;
    printf("\n%d*%d=%d",n,i,j);
    }
    return 0;
}