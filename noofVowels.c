#include<stdio.h>
#include<string.h>
void countV(char *str){

     int n = strlen(str);
     int count=0;

     char str1[]="AEIOUaeiou";
     int n1 = strlen(str1);

     for(int i=0;i<n;i++){

        for(int j =0;j<n1;j++){
            if(str[i]==str1[j]){
                count++;
            }
        }
     }

     printf("No. of vowels is %d",count);


}

int main(){

   char str[] = "DarshVishwakarma";

   countV(str);

   return 0;



}
