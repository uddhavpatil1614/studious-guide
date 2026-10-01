#include<stdio.h>
int add (float , float);
int subtract (float , float);
int multiple (float , float);
int division (float , float);
int main()
{
float result, num1, num2 ;
int user_input ;
printf("enter first number  = ");
scanf("%f",& num1);
printf ("enter second number = ");
scanf ("%f",& num2);
printf("add = 1\n");
printf("subtract = 2 \n");
printf("multiple = 3 \n");
printf("division = 4 \n");
printf("choose the opration form the above option (user_input) = ");
scanf("%d",& user_input);
if(user_input == 1)
{
result = add( num1 , num2);
printf("sum = %f", result);
}
else if(user_input == 2)
{
result = subtract(num1 , num2);
printf("subtraction = %f", result);
}
else if(user_input == 3)
{
result = multiple(num1,num2);
printf("multiplication = %f", result);
}
else if (user_input == 4)
{
if(num2!=0)
{
result = division(num1 , num2);
printf ("division = %f", result);
}
else
{
printf("infinite");
}
}
else 
{
printf(" invalid input");
}
return 0;
}
int add(float num1 , float num2)
{
return  num1 + num2;
}
int subtract (float num1 , float num2)
{
return num1 - num2;
}
int multiple (float num1 , float num2)
{
return  num1 * num2;
}int division (float num1 , float num2)
{
return  num1 / num2;
}