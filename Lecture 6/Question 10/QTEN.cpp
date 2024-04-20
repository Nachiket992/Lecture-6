#include <stdio.h>

int main() {
        
       int number;
        
       printf("Check the number whether it is an 'Even number' or 'Odd number'.\n\n");
       printf("Enter the number :-");
       scanf("%d", &number);
       if(number % 2 == 0) {
           printf("\nThe number %d is an 'Even number'.\n\n", number);
       }
       else {
           printf("\nThe number %d is an 'Odd number'.\n\n", number);
       }
       printf("Thank you.");


    return 0;
}