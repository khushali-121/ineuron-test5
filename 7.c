//print the N  natural no. in reverse order
#include<stdio.h>
int main()
{
    int i,n;
    printf("Enter a number=");
    scanf("%d",&n);
    for(i=n;i>=1;i--)
    {
    printf("\n%d",i);
    }
    return 0;
}