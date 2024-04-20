#include<stdio.h>

int main() {

int a, b;

printf("Find the minimum number from the given 2 numbers.\n\n");
printf("Enter a value of the first number :- ");
scanf("%d", &a);
printf("\nEnter a value of the second number :- ");
scanf("%d", &b);
if(a < b) {
	printf("\nThe minimum value is :- %d.\n\n", a);
}else {
	printf("\nThe minimun value is :- %d.\n\n", b);
}
printf("Thank you.");

}
