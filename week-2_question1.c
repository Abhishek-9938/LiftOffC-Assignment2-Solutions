#include<stdio.h>
int main()
{
    int rem,S=0,n,m;
    printf("enter the no:");
    scanf("%d",&n);
    m=n;
    while(n>0)
    {
        rem=n%10;
        S+=rem;
        n/=10;
    }
    printf("The sum of digits of no %d=%d",m,S);
}

