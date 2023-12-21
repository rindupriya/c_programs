#include <stdio.h>
/*
Name :Indupriya Reganti
Date :21/12/2023
Sample input:5
1 2 3 4 5
Sample output:
1 3 5
Description:add the odd indexes into another aray
*/
void arry(int *arr,int *arr1,int size,int *news);
int main()
{
    int size,news=0;
    scanf("%d",&size);
    int arr[size],arr1[size];
    for(int i=0;i<size;i++)
    {
        scanf("%d",&arr[i]);
    }
    arry(arr,arr1,size,&news);
    for(int i=0;i<news;i++)
    {
        printf("%d",arr1[i]);
    }
}
void arry(int *arr,int *arr1,int size,int *news)
{
    for(int i=0;i<size;i++)
    {
        if(arr[i]%2 !=0)
        {
            arr1[*news]=arr[i];
            *news++;
        }
    }
}

