//print cubes of N  natural no.
#include<stdio.h>
int main()
{
    int i,j,n;
    printf("Enter a number=");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
    j=i*i*i;
    printf("\n%d",j);
    }
    return 0;
}