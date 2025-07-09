#include<stdio.h>
#include<stdlib.h>

//Password == 428397

int main(){
    printf("\n                      Welcome to Mr.Lock System ^_^");
    int password;
    printf("\n\nPlease enter your password...");
    scanf("%d", &password);

    if (password == 428397){
        printf("\n                      The password is correct  ");
        printf("\n                             Welcome :)");
    }
    else{
    printf("\n                      The password is WRONG!!");
    printf("\n                      You still have two times");

    printf("\nTry Again...");
    scanf("%d", &password);

    if (password == 428397){
        printf("\n                      The password is correct  ");
        printf("\n                             Welcome :)");
    }
    else{
    printf("\n                      The password is WRONG!!");
    printf("\n                      You still have one time");

    printf("\nTry Again...");
    scanf("%d", &password);
    
    if (password == 428397){
        printf("\n                      The password is correct  ");
        printf("\n                             Welcome :)");
    }
    else{
    printf("\n                      WRONG!!");
    printf("\n                      WRONG!!");
    printf("\n                      WRONG!!");
    printf("\n                      WRONG!!");
    printf("\n                      WRONG!!");
    printf("\n                      WRONG!!");
    printf("\n                      WRONG!!");
    printf("\n                      WRONG!!");
    printf("\n                      WRONG!!");
    printf("\n                      WRONG!!");
    printf("\n                      WRONG!!");
    }
    }
}
    return 0;
}