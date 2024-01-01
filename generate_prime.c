#include<stdio.h>
int is_prime(int);//prototype
void generate_prime(int);//prototype
void generate_prime(int num)//function defination
{
    for(int i=2; i <= num ; i++)//checking from 2 because 1 is neither prime nor notprime
    {
       if(is_prime(i))//fn call again
          {
             printf("%d ",i);
          }
    }
}
int is_prime(int i)//fn defination
{
        int count = 0;
        for(int j = 1 ; j <= i ; j++)//dividing ,so that if count is 2 it will return
        {
         if(i % j == 0)
            {
             count++;
            }
        }
       return count == 2;
 }
    
int main()//main function
{
int num;//declaring
printf("Enter number:");//prompt message
scanf("%d",&num);//reading
if(num > 1)//if num is> 1 func call else invalid input
{
generate_prime(num);
}
else
{
    printf("Invalid input\n");
}
return 0;
}

