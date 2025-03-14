#include <stdio.h>
int factorial(int x){
    
    if(x==1 || x==0){
        return 1;
    }else{
        return factorial(x-1)*x;
    }
}
int main(){
    int a;
    // printf("Enter your number:");
    // scanf("%d",&a);
    // if(a<0){
    //     printf("Invalid Input");
    // }
    // printf("The factorial of %d is: %d",a,factorial(a));
    // return 0;
    while (1) {
        printf("Enter a non-negative number: ");
        
        if (scanf("%d", &a) != 1) { 
          
            printf("Invalid input! Please enter a valid integer.\n");
            while (getchar() != '\n');
        } 
        else if (a < 0) {
            printf("Invalid input!\n");
        } 
        else {
            break; 
        }
    }
    printf("The factorial of %d is: %d",a,factorial(a));
    return 0;   
}
