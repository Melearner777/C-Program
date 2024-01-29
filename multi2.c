#include <stdio.h>
int main() {
int num1;
int num2;
int sum;
int multi;
printf("enter first number:");
scanf("%d", &num1);
printf("enter second number:");
scanf("%d", &num2);
multi = num1*num2;
sum = num1+num2;
printf("The product of both numbers is: %d\n", multi);
printf("The sum of both numbers is: %d", sum);
return 0;
}