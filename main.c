#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
    int num, i, result = 0;
    
    printf("input a number : ");
    scanf("%d", &num);
    
    for (i = 1; i <= num; i ++)
        result += i;
        
    printf("The result : %d\n", result);
   
  system("PAUSE");
  
  return 0;
}
