#include <stdio.h>
/*
Name :Indupriya Reganti
Date :15/12/2023
*/
int main()
{
int num,bits,pos;
printf("enter number:");
scanf("%d",&num);
printf("enter bits");
scanf("%d",&bits);
printf("enter position");
scanf("%d",&pos);
get_bits(num,bits,pos);

}
void get_bits(int num,int bits,int pos)
{
    int k=0;
    k=(num & (((1<<bits)-1)<<(pos-bits+1)))>>(pos-bits+1);
   printf("%d",k);
}


