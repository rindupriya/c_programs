#include <stdio.h>
#include<string.h>
/*
Name :Indupriya Reganti
Date :17/12/2023
Sample input:indu
Sample output:udni
*/
int palindrome(char []);
int main()
{
char str[100];
scanf("%s",str);
int k = palindrome(str);
k == 1 ? printf("palindrome"):printf("not palindrome");
}
int palindrome(char *str)
{
    int i,flag=1;
    int len = strlen(str);
    for(int i = 0;i < len/2 ; i++)
    {
        if(str[i] != str[len-i-1])
        {
            flag = 0;
            break;
        }
    }
    return flag;
}




