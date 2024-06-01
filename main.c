#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>
#include <time.h>
#include "include/map.h"


int main(int argc, char argv[]) {
  vector2d room_size = {10, 20}; // without NUL | rows and columns
  char symbol = '-';


  while (getchar() != 'x') {
    system("cls");
    load_landscape(symbol, room_size, true);
  }

  return 0;
}
