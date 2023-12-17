#include <stdio.h>
#include<string.h>
/*
Name :Indupriya Reganti
Date 17/12/2023:
Sample input:indu
priya
Sample output:indupriya
*/
char concat(char [],char[]);
int main()
{
char str1[20];
scanf("%s",str1);
getchar();
char str2[20];
scanf("%s",str2);
concat(str1,str2);
printf("%s",str1);
}
char concat(char *str1,char *str2)
{
    int l=strlen(str1);
    int k=strlen(str2);
    for(int i = 0 ; i < k-1 ; i++)
    {
        str1[l+i]=str2[i];
    }
}

