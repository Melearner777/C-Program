#include<stdio.h>
int main(){
    int age;
    printf("Enter your age\n");

    scanf("%d", &age);
    printf("You have enterd your age as %d\n", age);
    if (age>=158) {
        printf("Enterd the valid age!");  
    }
    else if (age>=18){
        printf("You Can vote!");
    }
    else{
        printf("You can't vote!");
    }
    
}