#include <stdio.h>
/*
Name :Indupriya Reganti
Date :18/12/2023
Sample input:5 4
Sample output:20
Description:lcm using recursion
*/
int main()
{
int num1,num2;
scanf("%d %d",&num1,&num2);
int lcm = lcm_nums(num1,num2);
printf("%d",lcm);
}
int lcm_nums(int num1,int num2)
{
  static int len = 1;
  if(len %num1 == 0 && len % num2 == 0)
  {
      return len;
  }
  else
  {
      len++;
      lcm_nums(num1,num2);
      return len;
  }
}

