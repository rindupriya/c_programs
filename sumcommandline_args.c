#include <stdio.h>
#include<stdlib.h>

/*
Name :Indupriya Reganti
Date :21-12-2023
Sample input:./a.out  2 4 5
Sample output:3.667
Description:avg og command line args
*/
int main(int argc,char  **argv)
{
    int sum=0;
for(int i = 1 ; i < argc ; i++)
{
sum = sum + atoi(argv[i]);
}
float avg = (float)sum / (argc - 1);
printf("%f",avg);
}


