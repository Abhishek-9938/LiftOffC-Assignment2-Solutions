#include<stdio.h>
int main()
{
    int L,S,arr[10],i,n;
    printf("enter the no of values you want to enter:");
    scanf("%d",&n);
    printf("enter the element:");
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    L=arr[0];
    S=arr[0];
    for(i=0;i<n;i++)
    {
        if(arr[i]<S)
        S=arr[i];
        if(arr[i]>L)
        L=arr[i];

    }
    printf("The largest no is=%d",L);
    printf("\nThe smallest no is=%d",S);



}