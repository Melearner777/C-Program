#include <stdio.h>
int main() {
int h;
int w;
int d;
int volume;
printf("enter height:");
scanf("%d", &h);
printf("enter width:");
scanf("%d", &w);
printf("enter depth:");
scanf("%d", &d);
volume = h*w*d;
printf("the volume is: %d", volume);
return 0;
}