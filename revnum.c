#include<stdio.h>

int main(){
    int n,rem,sum=0;
    printf("Enter the number .. ");
    scanf("%d",&n);


    while(n>0){

        rem= n%10;
        sum= (sum*10)+rem;

        n=n/10;
    }
    printf(" Reverse is %d",sum);
    return 0;
}
