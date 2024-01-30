#include<stdio.h>
int main(){
    int num;
    printf("Enter the number:");
    scanf("%d",&num);


    for ( int i = 0; i < 11; i++)
    {
        printf("%d*%d=%d\n",num,i,num*i);
    }
    

    return 0;
}