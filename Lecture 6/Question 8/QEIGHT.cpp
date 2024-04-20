#include <stdio.h>

int main() {
        
       float tempreture;
        
       printf("Categorizes a given temperature into Hot, Moderate, or Cold based on the temperature.\n\n");
       printf("Enter the temprature in Celcius (°C) :-\n\n");
       printf("Tempreture :- ");
       scanf("%f", &tempreture);
       if(tempreture < 15) {
           printf("\nThe %.2f°C tempreture is considered as 'Cold'.\n\n", tempreture);
       }
       else if(tempreture >= 15 && tempreture <= 25) {
           printf("\nThe %.2f°C tempreture is considered as 'Moderate'.\n\n", tempreture);
       }
       else {
           printf("\nThe %.2f°C tempreture is considered as 'Hot'.\n\n", tempreture);
       }
       printf("Thank you.");


    return 0;
}