/* Exercise 1 - Calculations

   Write a C program to input marks of two subjects. Calculate and print the average of the two marks. */

#include <stdio.h>

int main() {

  int mrk1,mrk2;
  float avg;
  printf("Enter mark 01 : ");
  scanf("%d",&mrk2);

  printf("Enter mark 02 : ");
  scanf("%d",&mrk2);

  avg=(mrk1+mrk2)/2.0;

  printf("Average :%.2f",avg);
  return 0;
}

