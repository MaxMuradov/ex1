/******************
Name: Maxim
ID: 346975386
Assignment: ex1
*******************/
#include <stdio.h>

// REMIDER : YOU CANT USE ANY CONTROL FLOW OPERATIONS OR FUNCTIONS, ONLY BITWISE.

int main() {
  int num, num2 , pos, mask, res;
  // What bit
  printf("What bit:\n");
  /*Scan two integers (representing number and a position)
  Print the bit in this position. */
  printf("Please enter a number:\n");
  scanf("%d", &num);
  printf("Please enter a possition\n");
  scanf("%d", &pos); 
  res = (num >> pos) & 1;
  printf("The bit in position %d of number %d is: %d\n", pos, num, res);
  
  
  
  // Set bit
  printf("\nSet bit:\n");
  /*Scan two integers (representing number and a position)
  Make sure the bit in this position is "on" (equal to 1)
  Print the output
  Now make sure it's "off" (equal to 0)
  Print the output */
  printf("Please enter a number:\n");
  scanf("%d", &num);
  printf("Please enter a possition\n");
  scanf("%d", &pos); 
  mask = 1 << pos;
  res = num | mask;
  printf("Number with bit %d set to 1: %d\n", pos, res);
  res = num & (~mask);
  printf("Number with bit %d set to 0: %d\n", pos, res);
   

  // Toggle bit
  printf("\nToggle bit:\n");
  /*Scan two integers (representing number and a position)
  Toggle the bit in this position
  Print the new number */
  printf("Please enter a number:\n");
  scanf("%d", &num);
  printf("Please enter a possition\n");
  scanf("%d", &pos); 
  mask = 1 << pos;
  res = num ^ mask;
  printf("Number with bit %d toggled: %d\n", pos, res);
  
  
  // Even - Odd
  printf("\nEven - Odd:\n");
  /* Scan an integer
  If the number is even - print 1, else - print 0. */
  printf("Please enter a number:\n");
  scanf("%d", &num);
  res = num & 1;
  res = ~res;
  printf("&d", res);

  // 3, 5, 7, 11
  printf("\n3, 5, 7, 11:\n");
  /* Scan two integers in octal base
  sum them up and print the result in hexadecimal base
  Print only 4 bits, in positions: 3,5,7,11 in the result. */
  printf("Please enter the first number:\n");
  scanf("%o", &num);
  printf("Please enter the second number\n");
  scanf("%o", &num2); 
  res = num + num2;
  mask = 1;
  printf("%X", res);
  printf("The 3,5,7,11 bits are: ");
  printf("%d", (res >> 3) & mask);
  printf("%d", (res >> 5) & mask);
  printf("%d", (res >> 7) & mask);
  printf("%d\n", (res >> 11) & mask);

  
  
  printf("Bye!\n");
  
  return 0;
}
