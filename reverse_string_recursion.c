#include <stdio.h>
/*
Name :Indupriya Reganti
Date :17/12/2023
Sample input:indu
Sample output:udni
Description:reverse string
*/
void reverse_string(char []);
int main()
{
char str[100];
scanf("%s",str);
reverse_string(str);
}
void reverse_string(char *str)
{
    if(*str)
    {
        reverse_string(str + 1);
        printf("%c",*str);
    }
}


