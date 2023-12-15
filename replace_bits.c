#include <stdio.h>
/*
Name :Indupriya Reganti
Date :
Sample input:
Sample output:
Description:
*/
void replace_bits(int ,int,int);
int main()
{
int num,val,bits;
printf("Enter num:");
scanf("%d",&num);
printf("evnter bits:");
scanf("%d",&bits);
printf("enter val");
scanf("%d",&val);
replace_bits(num,bits,val);
return 0;
}
void replace_bits(int num,int n,int val)
{
    int k =0,res=0;
   k= num&(~((1<<n)-1));
    int l =0;
      l=val &((1<<n)-1);
    res = k|l;
    printf("%d",res);
}

