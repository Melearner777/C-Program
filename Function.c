#include <stdio.h>
void printmultiplication(int num);

int main() {
    int num;
    printf("Enter the number:");
    scanf("%d",&num);
    printmultiplication(num);


   return 0;
}
    void printmultiplication(int num){
        int i;
        for ( i = 1; i < 11; i++)
        {
            printf("%d*%d=%d\n",num,i,num*i);
        }
        
    }
