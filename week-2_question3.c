#include<stdio.h>

int main()
{
    char str[30];
    int c=0,i;
    printf("enter the string:");
    gets(str);
    for(i=0;str[i]!='\0';i++)
    {
        if(str[i]==' ' && str[i+1]!=' ')
        c++;

    }
   
    printf("The no of words in the given statement =%d",c+1);
    


}