#include <stdio.h>
int main() {
int r;
float result;
printf("enter the radius: ");
scanf("%d", &r);
result = 3.14*r*r;
printf("The area is %.2f", result);
return 0;
}