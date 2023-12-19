#include <stdio.h>
#include<stdlib.h>
/*
Name :Indupriya Reganti
Date :19/12/2023
Sample input:1 2 3 4 5 6
Sample output:1 2 3 4 5 6
Description:memory allocation using first dynamic and second static
*/
int main()
{
int (*a)[3];
a = malloc(2*sizeof(*a));
if(a == NULL)
{
    printf("Mmemory not");
    return 1;
}
for(int i = 0 ; i < 2 ; i++)
{
    printf("enter 3 elements to array %d",i+1);
    for(int j = 0;j < 3 ;j++)
    {
        scanf("%d",&a[i][j]);
    }
}
printf("elements are\n");
for(int i = 0 ; i < 2 ; i++)
{
    printf("array %d: ",i+1);
    for(int j = 0 ; j < 3 ;j++)
    {
        printf("%d ",a[i][j]);
    }
printf("\n");
}
}

