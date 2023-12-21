#include <stdio.h>
/*
Name :Indupriya Reganti
Date :21/12/2023
Sample input:indu23@
Sample output:udni
Description:using recusuin print the string only alphabets are to be printed
*/
void reverse_str(char []);
int main()
{
char str[100];
scanf("%s",str);
reverse_str(str);
}
void reverse_str(char *str)
{
    if(*str)
    {
        reverse_str(str+1);
        if((*str >='a' && *str <='z') || (*str >='A' && *str <= 'Z'))
        {
            printf("%c",*str);
        }
    }
}

