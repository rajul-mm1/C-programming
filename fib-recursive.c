#include<stdio.h>

int fib( int n){
    if(n == 0){
        printf("Its a fibonacci no\n");
    }
    int f1 = 0;
    int f2 = 1;
    int f3 = f1 + f2;

    while(f3 < n){
        f1 = f2;
        f2 = f3;
        f3 = f1 + f2;
    }
    if(f3 == n)
            printf("Its a fibonacci no");
    else 
        printf("Its not a fibonacci no");
}

int main(){
   int n;
    
    printf("enter n:");
    scanf("%d", &n);

    fib(n);

    return 0;
}