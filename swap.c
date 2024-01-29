#include <stdio.h>
int main() {
int a;
int b;
printf("enter value of a:");
scanf("%d", &a);
printf("enter value of b:");
scanf("%d", &b);
a=a+b;
b=a-b;
a=a-b;
printf("After swapping, the value of a is: %d\n", a);
printf("and the value of b is: %d", b);
return 0;
}