#include<stdio.h>
int fibo(int a,int b, int n){

    if(n==0){
            return;
        }

        int c= a+b;
        printf("%d\n",c);
        fibo(b,c,n-1);

}

int main(){

       int a=0 ;
        int b=1;
         printf("%d\n",a);
          printf("%d\n",b);
        int n =10;

        fibo(a,b,n-2);

}


