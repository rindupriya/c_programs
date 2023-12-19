#include <stdio.h>
#include<stdlib.h>
/*
Name :Indupriya Reganti
Date :19/12/2023
Sample input:1 2 3 4 5 6
Sample output:1 2 3 4 5 6
Description:memory allocation using first static and second dynamic
*/
int main()
{
int *a[2];
for(int i = 0 ; i < 2 ; i++)
{
    a[i] = malloc(3*sizeof(int));
    if(a[i] == NULL)
    {
        printf("memor");
        return 1;
    }
}
for(int i = 0 ; i < 2 ; i++)

{
    printf("enetr 3 array %d",i+1);
    for(int j = 0 ; j < 3 ; j++)
    {
        scanf("%d",&a[i][j]);
    }
}
for(int i = 0 ; i < 2 ; i++)
{
    for(int j = 0 ; j < 3 ; j++)
    {
        printf("%d ",a[i][j]);
    }
    printf("\n");
}
}
