#include <stdio.h>

int main()
{
    
    //variables:
    int number1;
    int number2;
    int option;
    int result;
    
    
    printf("Give me TWO NUMBERS :D");
    scanf("%d", &number1);
    scanf("%d", &number2);
    printf("Welcome to calculeitor! The BEST Turbo-C calculator made EVER!");
    printf("Please, select an option below:");
    printf("Option 1: addition");
    printf("Option 2: substract");
    printf("Option 3: multiply");
    printf("Option 4: divide");
    printf("Option 5: in progress");
    scanf("%d", &option);
    
    
        switch(option){
          case 1:
            printf("Give me a NUMBER");
            
            result = number1 + number2;
            break;
          case 2:
            result = number1 - number2;
            break;
          case 3:
            result = number1 * number2;
            break;
          case 4: 
             if(number1 == 0 || number2 == 0){
                 printf("Illegal operation!");
             }else{
                  result = number1 / number2;
             }
          
         
          
            
        };
    
printf("%d", result);
    return 0;
}
