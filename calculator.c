#include <stdio.h>
#include <stdlib.h>

int main(){

     double num1;
     double num2;
     char op;

     printf("Enter a number: ");
     scanf("%lf", &num1);
     printf("Enter operator: ");
     scanf(" %c", &op);
     printf("Enter a number: ");
     scanf("%lf", &num2);

     switch(op) {
     case '+':
        printf("%f",num1 + num2);
        break;
     case '-':
        printf("%f",num1 - num2);
        break;
     case '*':
        printf("%f",num1 * num2);
        break;
     case '/':
        printf("%f",num1 / num2);
        break;
     default:
        printf("Invalid Operator");

     }

     return 0;
}

