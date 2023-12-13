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
unsigned int num=0xAB;
swap(&num);
printf("%x",num);
}
void swap(int *num)
{
    int k=*num&((1<<4)-1);
    int l=*num&(((1<<4)-1)<<4);
    int m=k<<4;
    int n=l>>4;
    *num=m|n;
}


