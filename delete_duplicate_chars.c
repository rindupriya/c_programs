#include <stdio.h>
/*
Name :Indupriya Reganti
Date :18/12/2023
Sample input:induupriya
Sample output:induprya
Description:remove duplicates
*/
int main()
{
char str[100];
scanf("%s",str);
char str1[100];
delete_duplicates(str,str1);
printf("%s",str1);
}
void delete_duplicates(char *str,char *str1)
{
    int m;
    for(int i = 0 ; i < strlen(str) ; i++)
    {
        for(int j = i + 1; j < strlen(str) ; j++)
        {
            if(str[i] == str[j])
                {
                    str[j]='1';
                    
                }
        }
    if(str[i] != '1')
    {
        str1[m] = str[i];
        m++;
    }
    }
   str1[m]='\0';

}


    


