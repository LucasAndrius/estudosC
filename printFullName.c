#include <stdio.h>

int main()
{
  // creating a string
  char fullName[30];

  // ask the user to input some texto
  printf("Type yout full name end press enter:\n");

  // get the text
  fgets(fullName, sizeof(fullName), stdin);

  // output the text
  printf("Hello %s", fullName);
  return 0;
}