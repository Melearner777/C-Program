#include<stdio.h>
int main(){
    int i,age;
    for (i=0;i<10;i++){
        printf("%d\nEnter your age\n",i);
        scanf("%d",age);
        if(age<10)
        {
            break;
        }
        //if (age<10){
        //    continue;
        //}
        //printf("we can now exit from the loop");
    }
    return 0;
}