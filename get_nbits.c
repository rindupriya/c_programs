#include <stdio.h>
/*
Name :Indupriya Reganti
Date :
Sample input:
Sample output:
Description:
*/
void get_bits(int* ,int*);
int main()
{
int num,num1;
scanf("%d",&num);
scanf("%d",&num1);
get_bits(&num,&num1);
printf("%d",num);
}
void get_bits(int *num,int *num1)
{
    *num=*num & ((1<<*num1)-1);
    
}

