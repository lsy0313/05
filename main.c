#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
    int answer = 204;
    int input, trials = 0;
    
    do {
        trials++;
        
        printf("Guess a number : ");
        scanf("%d", &input);
        
        if (input > answer) {
           printf("high!\n");
           continue;
           }
           
        else if (input < answer) {
             printf("low!\n");
             continue;
             }
             
        else  {
             printf("Congratulation! trials: %d\n", trials);
             break;
             }
        
        }while (input != answer);
        
   
  system("PAUSE");
  
  return 0;
}
