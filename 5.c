// Greatest number


#include<stdio.h>
int main ()
{
    int num1, num2, num3;
    
 printf("enter any three number\n ");
 scanf("%d %d %d",&num1 ,&num2,&num3);


    //checking if num1 is greatest
    if (num1 >= num2 && num1 >= num3)
        printf("%d is the greatest", num1);
        
    //checking if num2 is greatest
    else if(num2 >= num1 && num2 >= num3)
         printf("%d is the greatest", num2);

    //checking if num2 is greatest
    else if(num3 >= num1 && num3 >= num2)
         printf("%d is the greatest", num3);
    
    return 0;
}