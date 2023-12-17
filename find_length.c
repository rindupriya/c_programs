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
char str[100];
scanf("%s",str);
int count=0;
int k=find_length(str,0);
printf("%d",k);
}
int find_length(char str[],int count)
{
    static int len=0;
 
    if(str[count]=='\0')
    {
        return len;
    }
    else
    {
        len++;
        find_length(str,count+1);
    }
}

