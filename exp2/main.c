#include<stdio.h>

int main(){
    char name[20];
    printf("enter your name \n");
    fgets(name, 20, stdin);
    printf("\t\t\n\n\n my name is %s \n\n\n ", name);

    return 0 ;
}
