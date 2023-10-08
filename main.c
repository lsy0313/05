#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
    int num1, num2, result;
    char operator;
    printf("enter the calculation : ");
    scanf("%d %c %d", &num1, &operator, &num2);
    
    switch (operator) {
           case '+':
                result = num1 + num2;
                break;
           case '-':
                result = num1 - num2;
                break;
           case '*':
                result = num1 * num2;
                break;
           case '/':
                result = num1 / num2;
                break;
           case '%':
                result = num1 % num2;
                break;
    }
    
    printf("The result is %d.\n", result);
    
   
  system("PAUSE");
    
  return 0;
}
