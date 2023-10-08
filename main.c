#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
    int num;
    
    printf("input an integer : ");
    scanf("%d", &num);
    
    if (num > 0) 
            printf("it's a positive number.\n");
            
            else if (num < 0) 
                 printf("it's a negative number.\n");
            
                 else 
                      printf("it's zero.\n");
                 
    
    
   
  system("PAUSE");
  
  return 0;
}
