/* Exercise 1 - Calculations

   Write a C program to input marks of two subjects. Calculate and print the average of the two marks. */

#include <stdio.h>

int main() {
  int sub1, sub2;
	float total;
	float average;

  printf("Enter Marks of the first subject :");
	scanf("%d" , &sub1);
	
	printf("\nEnter Marks of the second subject :");
	scanf("%d" , &sub2);

  total=sub1+sub2;
	printf("\n\n Total - %.2f", total);
	
	average=total/2;
	printf("\n\n Average - %.2f", average);
  
  return 0;
}

