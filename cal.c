#include<stdio.h>
int main(){ 
 int addition, subtraction, multiplication,division;
    int a,b;
    char operation;

    printf("====== Simple Calculator ======\n");

    printf("Enter first number: ");
    scanf("%d",&a);

    printf("Enter second number: ");
    scanf("%d",&b);

    printf("Enter the operation you want to perform (+, -, *, /):\n ");
    scanf(" %c",&operation);
    
    switch(operation){

        case'+':
         addition = a + b;
         printf("Result:%d\n",addition);
         break;

         case'-':
         subtraction = a - b;
         printf("Result:%d\n",subtraction);
         break;

         case'*':
         multiplication = a*b;
            printf("Result:%d\n",multiplication);
            break;

        case'/':
            if(b != 0){
                division = a/b;
                printf("Result:%d\n",division);
            }
            else{
                printf("Error: Division by zero is not allowed.\n");
            }
            break;

            default:
            printf("Error: Invalid operation.\n");  

    }
    return 0;
}
