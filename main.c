#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
    int num;
    
    printf("input an integer : ");
    scanf("%d", &num);
    
    if (num < 0) {
       num = -num;
       printf("The absolute value is %d. \n", num);
    }
       
    else 
        printf("The absolute value is %d. \n", num);
    
    
   
  system("PAUSE");
  
  return 0;
}
