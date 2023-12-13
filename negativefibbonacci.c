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
int num1=0,num2=1,temp;
int num,sum=0,num3;
printf("Enter");
scanf("%d",&num);
num3=0-num;
if (num > 0 )
    printf("invalid");
else
{
    
printf("%d %d",num1,num2);
for (int i=0 ; i < num3 ;i++)
{

    sum=num1+num2;
    num1=num2;
    num2=sum;
    temp=i;
    if ( temp%2 ==0 )
        printf("-%d ",sum);
    else
    
        printf("%d ",sum);
}
}
return 0;
}

