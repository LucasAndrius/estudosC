#include <stdio.h>

int main()
{

  // create a string
  char firstName[30];
  // [L,U,C,A,S]

  // ask the user to input some text
  printf("Enter yout frist name:\n");

  // get and save the text
  scanf("%s", firstName);

  // output the text
  printf("Hello %s", firstName);
  return 0;
}