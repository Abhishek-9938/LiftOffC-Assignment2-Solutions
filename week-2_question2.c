#include<stdio.h>
int main()
{
    int i,arr[10],n,sum1=0,sum2=0;
    printf("enter the no of values you want to enter:");
    scanf("%d",&n);
    printf("enter the values:");
    for(i=0;i<n;i++)
    {
       scanf("%d",&arr[i]); 
    }
    for(i=0;i<n;i++)
    {
        if(arr[i]%2==0)
        sum1+=arr[i];
        if(i%2==0)
        sum2+=arr[i];

    }
    printf("The sum of even element=%d",sum1);
    printf("\nThe sum of even position element=%d",sum2);
    
    
}