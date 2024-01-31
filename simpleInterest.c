#include <stdio.h>
int main() {
int P;
float R;
int T;
float SI;
printf("enter the principal amount:");
scanf("%d", &P);
printf("enter the rate of interest:");
scanf("%f", &R);
printf("enter the time period:");
scanf("%d", &T);
SI=(P*R*T)/100;
printf("The SI is: %.2f", SI);
return 0;
}