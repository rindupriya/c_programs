#include <stdio.h>
/*
Name :Indupriya Reganti
Date :
Sample input:
Sample output:
Description:
*/

int main()
{
int arr[2][3]={2,3,6,4,5,7};
int product=1;
for(int i= 0 ;i<2 ; i++)
{
 for(int j = 0;j < 3;j++)
 {
  product *= arr[i][j];
 }
}
printf("%d",product);
}

