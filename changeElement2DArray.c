#include <stdio.h>

int main()
{
  int matriz[2][3] = {{1, 4, 2},
                      {3, 6, 8}};
  printf("O numero da linha 0, coluna 0 é: %d  \n", matriz[0][0]);

  matriz[0][0] = 9;

  printf("O numero da linha 0, coluna 0 é: %d  \n", matriz[0][0]);

  return 0;
}
