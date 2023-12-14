#include <stdio.h>
/*
Name :Indupriya Reganti
Date :14/12/2023
Sample input:
Sample output:
Description:
*/
int main()
{
char str[100];
scanf("%[^\n]s",str);
replace_blanks(str);
}
void replace_blanks(char *str)
{
    int len = strlen(str);
    for(int i = 0 ; i < len ; i++)
    {
       if(str[i]==' ' && str[i-1] == ' ')
       {
           continue;
       }
       printf("%c",str[i]);
    }
}
        
                    



