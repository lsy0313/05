#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
    char c;
    int count = 0;
    
    printf("input a string : ");
    
    while ((c = getchar()) != '\n') {
          if (c >= '0' && c <= '9') {
                count++;
          }
    }
    printf("the number of digits is %d.\n", count);
   
  system("PAUSE");
  
  return 0;
}
