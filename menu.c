#include <stdio.h>
#include <stdlib.h>
/*
name:Reganti indupriya
date:21/12/2023
sample input:
Menu :
1. Add element
2. Remove element
3. Display element
4. Exit from the program
sample output:
Choice ---> 1
Enter the type you have to insert:
1. int
2. char
3. float
4. double
Choice ---> 2
Enter the char : k
1. Add element
2. Remove element
3. Display element
4. Exit from the program
Choice ---> 3
-------------------------
0 -> k
-------------------------
description:
program to memory allocation
*/
int main() {
    int k = 1;

    void *ptr = malloc(8);
    int flag_c1 = 0, flag_c2 = 0, flag_s = 0, flag_i = 0, flag_dou = 0, flag_float = 0;//globally declaring

    while (1) {
        printf("Menu:\n");
        printf("1. Add elements\n2. Remove elements\n3. Display elements\n4. Exit\n");//menu 
        int num;
        printf("Enter your choice: ");
        scanf("%d", &num);

        switch (num)
        {
            case 1:
                printf("Enter the type of data you want to enter:\n");
                printf("1. int\n2. char\n3. float\n4. short\n5. double\n");//which datatype i want to enter
                int num2;
                scanf("%d", &num2);

                switch (num2) 
                {
                    case 1:
                    case 3:
                        if (flag_dou == 0 && flag_i == 0) //if it is int we have to make integer flag 1 and also chesk double flag is 0 or not
                        {
                            printf("Enter the integer or float value: ");
                            scanf("%d", ((int *)ptr + 4));
                            flag_i = 1;
                        }
                        break;

                    case 2:
                        if ((flag_c1 == 0 || flag_c2 == 0) && flag_dou == 0) //have to check c1 =0 or c2 =0 and double aslo have to check
                        {
                            if (flag_c1 == 0) 
                            {
                                printf("Enter the char: ");
                                getchar();
                                scanf("%c", (((char *)ptr) + 0));
                                flag_c1 = 1;
                            } else 
                            {
                                printf("Enter char 2: ");
                                getchar();3
                                scanf("%c", ((char *)ptr) + 1);
                                flag_c2 = 1;
                            }
                        }
                        break;

                    case 4:
                        if (flag_s == 0 && flag_dou == 0)//for short entering so that flag s =0 means we can enter
                        {
                            printf("Enter the short value: ");//prompt
                            scanf("%hd", ((short *)ptr + 2));
                            flag_s = 1;//making 1
                        }
                        break;

                    case 5:
                        if (flag_c1 == 0 && flag_c2 == 0 && flag_s == 0 && flag_i == 0 && flag_dou == 0) //checking for double ,for it we have to check whether all flags are 0 or not
                        {
                            printf("Enter the double: ");
                            scanf("%lf", ((double *)ptr));
                            flag_dou = 1;
                        }
                        break;

                    default:
                        printf("Invalid choice!\n");
                }
                break;

            case 2:
                printf("Elements to remove:\n");//before removing ,have to display the indexes
                if (flag_c1 == 1)
                {
                    printf("%d -> %c\n", 0, *((char *)ptr));//displaying only the flag =1 elements
                }
                if (flag_c2 == 1)
                {
                    printf("%d -> %c\n", 1, *(((char *)ptr) + 1));
                }
                if (flag_s == 1)
                {
                    printf("%d -> %hd\n", 2, *(((short *)ptr) + 2));
                }
                if (flag_i == 1) 
                {
                    printf("%d -> %d\n", 4, *(((int *)ptr) + 4));
                }
                if (flag_dou == 1)
                {
                    printf("%d -> %f\n", 0, *(((double *)ptr)));
                }

                printf("Which index do you want to remove: ");
                int remove;
                scanf("%d", &remove);//taking input for removing digit upto our choice
                switch (remove) 
                {
                    case 4:
                        flag_i = 0;//particular index =0 (we will make)
                        break;
                    case 0:
                        flag_c1 = 0;
                        break;
                    case 1:
                        flag_c2 = 0;
                        break;
                    case 2:
                        flag_s = 0;
                        break;
                    case 5:
                        flag_dou = 0;
                        break;
                    default:
                        printf("Invalid index!\n");
                }
                break;

            case 3:
                printf("Displaying elements:\n");
                if (flag_c1 == 1) 
                {
                    printf("0 -> %c\n", *(((char *)ptr) + 0));//displaying elemts
                }
                if (flag_c2 == 1) 
                {
                    printf("1 -> %c\n", *(((char *)ptr) + 1));
                }
                if (flag_s == 1) 
                {
                    printf("2 -> %hd\n", *(((short *)ptr) + 2));
                }
                if (flag_i == 1) 
                {
                    printf("4 -> %d\n", *(((int *)ptr) + 4));
                }
                if (flag_dou == 1) 
                {
                    printf("0 -> %f\n", *(((double *)ptr)));
                }
                break;

            case 4:
                k = 0;//exit if 4 entered
                exit(0);
                break;

            default:
                printf("Invalid choice!\n");
        }
    }

    free(ptr);//freeing 
    ptr = NULL;
    return 0;
}



