#include<stdio.h>

int main(){

    int f1, f2, f3, n;

    printf("enter n:");
    scanf("%d", &n);
    f1 = 0;
    f2 = 1;
    if(n == 0)
    printf("fibonacci no\n");
    f3 = f1 + f2;

    while(f3 < n){
        f1 = f2;
        f2 = f3;
        f3 = f1 + f2;
    }
    if(f3 == n){
        printf("fibonacci no");
    }
    else{
        printf("not a fibonacci no");
    }
    return 0;
}