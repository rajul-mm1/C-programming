#include<stdio.h>
#define ENTER 13
#define TAB 9
#define BKSP 8


char pwd[100];

int main(){
    int i = 0;
    char ch;

    printf("Enter your password\n");
    printf("Password:");

    while(1){
        ch = getch();

        if(ch == ENTER || ch == TAB){
            pwd[i] = '\0';
            break;
        }
        else if(ch == BKSP){
            if(i > 0){
                i++;
                printf("\b \b");
            }
        }
        else{
            pwd[i++] = ch;
            printf("* \b");
        }
    }

    printf("\n\nPassword:%S\nLength:%d\n\n",pwd,i);
    return 0;
}