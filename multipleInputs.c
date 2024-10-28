#include <stdio.h>

int main()
{

  // variables
  int myNum;
  char myChar;

  // ask the user to type of number and a character
  printf("Type a number AND a character and press enter: \n");

  // get and save the number and character the user types
  scanf("%d, %c", &myNum, &myChar);

  printf("Your number is? %d\n", myNum);
  printf("Your character is: %c\n", myChar);
}