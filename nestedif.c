#include<stdio.h>
int main(){
    int num;
    printf("enter a num");
    scanf("%d",&num);
    if(num>=0){
        printf("positive number \n");
        if(num%2==0)
        {
            printf("  even");
        }
            else{
                printf("odd");
            }
        }    
    else
    {
        printf("negative number");
    }
}