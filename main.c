#include <stdio.h>
#include <stdlib.h>

int main()
{
    float num1, num2, ans, ans1;
    char sign, add, sub, div, mult, all;
    add = '+';
    div = '/';
    sub = '-';
    mult = '*';
    all = 'm';
    printf("choose either addition(+),subtraction(-) ,division(/),multiplication(*) \n for all answers enter(m)\n");
    scanf("%c", &sign);
    printf("enter the first number : \n");
    scanf("%f", &num1);
    printf("enter the second number : \n");
    scanf("%f", &num2);
    if(sign==add){
        ans = num1 + num2;
        printf(" \t The sum of the 2 numbers is: %f \n", ans);
    }
    else if(sign==div){
            ans = num1 / num2;
            ans1 = num2 / num1;
            printf("\t division of the first number and the second number is %f\n", ans);
            printf("\t division of the second number and the first number is %f\n", ans1);
    }
    else if(sign==sub){
            ans = num1 - num2;
            ans1 = num2 - num1;
            printf("\t subtraction of the first number and the second number is %f\n", ans);
            printf("\t subtraction of the second number and the first number is %f\n", ans1);
    }
    else if(sign==mult){
            ans = num1 * num2;
            printf("\tmultiplication of the first number and the second number is %f\n", ans);
    }
    else if(sign==all){
            printf("\t\t\t\t FULL ANSWERS \n\n");
            ans = num1 + num2;
            printf(" \t The sum of the 2 numbers is:\t %f\n\n", ans);
            ans = num1 / num2;
            ans1 = num2 / num1;
            printf("\t division of the first number and the second number is:\t %f\n\n", ans);
            printf("\t division of the second number and the first number is:\t %f\n\n", ans1);
            ans = num1 - num2;
            ans1 = num2 - num1;
            printf("\t subtraction of the first number and the second number is:\t %f\n\n", ans);
            printf("\t subtraction of the second number and the first number is:\t %f\t\n\n", ans1);
            ans = num1 * num2;
            printf("\t multiplication of the first number and the second number is:\t %f\n\n\n\n\n", ans);
    }
    else{
        printf("\n\n invalid input\n\n\n\n");
    }


    return 0;
}
