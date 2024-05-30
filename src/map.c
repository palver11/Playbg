#include "../include/map.h"


void load_landscape(char symbol, vector2d size, bool to_print) {
  char map[size[0]][size[1] + 1];

  for (int i = 0; i < size[0]; i++) {
    for (int y = 0; y < size[1]; y++) {
      map[i][y] = symbol;
    }
    map[i][size[1]] = '\0';
    if (to_print) {
      printf("%s\n", map[i]);
    }
  }
}


void render