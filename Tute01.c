/* Exercise 1 - Calculations

   Write a C program to input marks of two subjects. Calculate and print the average of the two marks. */

#include <stdio.h>

int main() {
  float mk1,mk2,tot,avg;

  printf("Mark 1:");
  scanf("%f",&mk1);
  printf("Mark 2:");
  scanf("%f",&mk2);

  tot=mk1+mk2;
  avg=tot/2.0;

  printf("Average: %.2f",avg);
  
  return 0;
}

