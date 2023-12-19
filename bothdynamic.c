#include <stdio.h>
#include<stdlib.h>
/*
Name :Indupriya Reganti
Date :
Sample input:
Sample output:
Description:
*/


int main()
{
    int **a;
    int i;
    a = malloc(2*sizeof(int *));
    if(a == NULL)
    {
        printf("memory not avalable");
        return 1;
    }
    for(int i=0;i<2;i++)
    {
        a[i] = malloc(3*sizeof(int));
        if(a[i]  == NULL)
        {
            printf("memory not avalibale");
            return 1;
        }
    }
    for(int i = 0;i < 2 ; i++)
    {
        for(int j = 0;j < 3;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    for(int i = 0;i<2;i++)
    {
        for(int j=0;j<3;j++)
        {
            printf("%d ",a[i][j]);
        }
    
    printf("\n");
    }
    for(int i = 0;i<2;i++)
    {
        free(a[i]);
    }
    free(a);

}

