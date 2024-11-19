/******************
Name: AyeletSpielman
ID: 340903376
Assignment: 01
*******************/
#include <stdio.h>

// REMIDER : YOU CANT USE ANY CONTROL FLOW OPERATIONS OR FUNCTIONS, ONLY BITWISE.

int main() {
  
  // What bit
  printf("What bit:\n");
  int num, p;
  printf("Please enter a number: \n");
  scanf("%d", &num);
  printf("Please enter a position: \n");
  scanf("%d", &p);
  int b = (num >> p) & 1;
  printf("The bit in position %d of number %d is: %d\n", p, num, b);
  /*Scan two integers (representing number and a position)
  Print the bit in this position. */
  
  // Set bit
  printf("\nSet bit: \n");
  int num2, p2;
  printf("Please enter a number: \n");
  //Input number
  scanf("%d", &num2);
  printf("Please enter a position: \n");
  //Input position
  scanf("%d", &p2);
  //Set bit in the position provided to equal 1
  int on = num2 | (1 << p2);
  //Set bit in the position provided to equal 0
  int off = num2 & ~(1 << p2);
  //Output on
  printf("Number with bit %d set to 1: %d", p2, on);
  //Output off
  printf("\nNumber with bit %d set to 0: %d", p2, off);
  /*Scan two integers (representing number and a position)
  Make sure the bit in this position is "on" (equal to 1)
  Print the output
  Now make sure it's "off" (equal to 0)
  Print the output */

  // Toggle bit
  printf("\nToggle bit:\n");
  int num3, p3;
  printf("Please enter a number: \n");
  //Input nummber
  scanf("%d", &num3);
  printf("Please enter a position: \n");
  //Input position
  scanf("%d", &p3);
  //Switch the bit in the position provided to be not what it was.
  int t = num3 & (~(num3 << p3));
  printf("Number with bit %d toggled: %d", p3, t);
  /*Scan two integers (representing number and a position)
  Toggle the bit in this position
  Print the new number */
  
  // Even - Odd
  printf("\nEven - Odd:\n");
  int num4;
  printf("Please enter a number: \n");
  //Input number
  scanf("%d", &num4);
  //If the right-most bit is 0, the number is even and we want to print 1 and vice versa.
  int eo = !(num4 & 1);
  printf("%d", eo);
  /* Scan an integer
  If the number is even - print 1, else - print 0. */
  
  // 3, 5, 7, 11
  printf("\n3, 5, 7, 11:\n");
  int num5, num6;
  printf("Please enter the first number (octal): \n");
  //Input the first number
  scanf("%o", &num5);
  printf("Please enter the second number (octal): \n");
  //Input the second number
  scanf("%o", &num6);
  //The sum of the 2 numbers
  int sum = num5 + num6;
  //Printing the sum in hexadecimal
  printf("The sum in hexadecimal: %X", sum);
  //Printing the bits in the 3rd, 5th, 7th and 11th positions
  int position3 = (sum >> 3) & 1, position5 = (sum >> 5) & 1, position7 = (sum >> 7) & 1, position11 = (sum >> 11) & 1;
  printf("\nThe 3,5,7,11 bits are: %d%d%d%d\n", position3, position5, position7, position11);

  /* Scan two integers in octal base
  sum them up and print the result in hexadecimal base
  Print only 4 bits, in positions: 3,5,7,11 in the result. */

  printf("Bye!\n");
  
  return 0;
}
