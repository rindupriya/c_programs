# c_programs
#include<stdio.h>
void replace_arr(int [],int);
int main()
{
    int size;
    scanf("%d",&size);
    int arr[size];
    for(int i=0;i<size;i++)
    {
        scanf("%d",&arr[i]);
        }
     replace_arr(arr,size);
     for(int i=0;i<size;i++)
         {
             printf("%d",arr[i]);
         }
}
void replace_arr(int *arr,int size)
{
    for(int i=0;i<size;i++)
    {
        int count=0;
        for(int j=1;j<=arr[i];j++)
        {
            if(arr[i]%j == 0)
            {
                count++;
            }
        }
        if(count==2)
        {
            arr[i]=1;
        }
        else
        {
            arr[i]=0;
        }
    }
}
