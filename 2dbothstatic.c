#include <stdio.h>
/*
Name :Indupriya Reganti
Date :19/12/2023
Sample input:123456
Sample output:123456
Description:memory allocation of both rows and cols static
*/
void array(int,int,int (*)[]);
int main()
{
int a[2][3]={1,2,3,4,5,6};
array(2,3,a);
return 0;
}
void array(int r,int c,int (*a)[c])
{
    for(int i=0;i<r;i++)
    {
        for(int j=0;j<c;j++)
        {
            printf("%d ",a[i][j]);
        }
    }
}
      

