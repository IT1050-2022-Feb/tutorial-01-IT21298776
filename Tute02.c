/*Exercise 2 - Selection

Write a program to calculate the amount to be paid for a rented vehicle.

•	Input the distance the van has travelled
•	The first 30 km is at a rate of 50/= per km.
•	The remaining distance is calculated at the rate of 40/= per km.


e.g.

Distance -> 20
Amount = 20 x 50 = 1000


Distance -> 50
Amount = 30 x 50 + (50-30) x 40 = 2300*/

#include <stdio.h>

int main() {
  float distance;
    
  float first_Amount, second_Amount ;

  printf("Enter the distance travelled :");
  scanf("%f" , &distance);

  if (distance<30) {
    first_Amount=50*distance;

    printf("Total Amount : %.2f" , first_Amount);
  }
  else {
    second_Amount=distance*40; 

    printf("Total Amount : %.2f" , second_Amount);      
  }
  
  return 0;
}
