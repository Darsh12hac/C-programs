#include<stdio.h>

int main(){
  int n;
  scanf("%d",&n);
  printf( "%s" ,(n%2==0)?" even": "odd");
}



// or another way....

/* #include <stdio.h>

int isEven(int n) {
    return (n & 1) == 0;
}

int main() {
    int num = 10;

    // Check if the number is even
    if (isEven(num)) {
        printf("%d is even.\n", num);
    } else {
        printf("%d is odd.\n", num);
    }

    return 0;
}*/
