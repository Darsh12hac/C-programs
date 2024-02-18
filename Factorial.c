#include<stdio.h>

void facto(int n){

   if(n<0) printf("Invalid Number");
   int factoo= 1;
   for(int i=1;i<=n;i++){
     factoo = factoo *i;
    }
    printf("Factorial is %d\n",factoo);

}
int main(){
    int n ;
    printf("Enter the Value ");
    scanf("%d",&n);
    facto(n);
   return 0;
}
