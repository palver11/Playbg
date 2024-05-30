#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>
#include "include/map.h"


int main() {
  vector2d room_size = {10, 20}; // without NUL | rows and columns
  char symbol = '-';

  while (getchar() != 'x') {
    system("cls");
    generate_map(symbol, room_size, true);
  }
  //generate_map(symbol, room_size, true);

  //getchar();
  return 0;
}
