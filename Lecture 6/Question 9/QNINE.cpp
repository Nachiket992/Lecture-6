#include <stdio.h>

int main() {

        int number1, number2, number3;
        
        printf("Find the largest number amongst any three number.\n\n");
        printf("Enter the 'First number' :- ");
        scanf("%d", &number1);
        printf("\nEnter the 'Second number' :- ");
        scanf("%d", &number2);
        printf("\nEnter the 'Third number' :- ");
        scanf("%d", &number3);
        if(number1 > number2 && number1 > number3) {
            printf("\nThe 'First number' = %d is largest amongst three.\n\n", number1);
        }
        else if(number2 > number1 && number2 > number3) {
            printf("\nThe 'Second number' = %d is largest amongst three.\n\n", number2);
        }
        else {
            printf("\nThe 'Third number' = %d is largest amongst three.\n\n", number3);
        }
        printf("Thank you.");
        
    return 0;
}