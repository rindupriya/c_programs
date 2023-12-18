#include <stdio.h>
/*
Name :Indupriya Reganti
Date :18/12/2023
Sample input:4
Sample output:24
Description:factorial using void data type
*/
void factorial_num(int num,int *fact);
int main()
{
int num;
scanf("%d",&num);
int fact=1;
factorial_num(num,&fact);
printf("%d",fact);
}
void factorial_num(int num,int *fact)
{

   *fact=1;
    
    if(num == 1 || num == 0)
    {
        *fact=1;
    }
    else
    {
       for(int i = 1;i<=num;i++)
       {
           *fact=*fact * i;
       }

    }
}

