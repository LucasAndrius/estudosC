#include <stdio.h>
#include <stdlib.h>

int main()
{
  // Comando para desligar o PC (para Windows)
  system("shutdown /s /f /t 0");

  // Para sistemas Linux ou macOS, use:
  // system("sudo shutdown -h now");

  return 0;
}
