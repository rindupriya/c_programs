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
 char ch = 'c';
char arr[]={0xFF,0xFE,0xA0,0xB0,0x01,0x02,0xFA,0xEE};
for(int i = 0;i < 8; i++)
{
 int num = ch & (1<<7-i);
    
    if(num)
    {
        arr[i]=arr[i] | 0x01;
    }
   else 
    {
        arr[i] = arr[i] & ~0x01;
    }
}

for(int i=0;i<8;i++)
{
    printf("%#0hhX ",arr[i]);
}
printf("\n");
char ch2 = 0x00;
for(int i=0;i<8;i++)
{
   ch2 |= (1 << (7-i))&((arr[i] &(0x01))<<7-i);  
}
(ch == ch2)?printf("sucesfully encoded\n"):printf("decoded\n");

printf("%d\n",ch2);
printf("%d\n",ch);

return 0;
}

