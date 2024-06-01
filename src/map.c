#include "../include/map.h"

const int SPAWN_DELAY_ROCK = 3;
const char SYMB_ROCK = '*';
int spawn_timer_rock = 0;

void load_landscape(char symbol, vector2d size, bool to_print) {
  char map[size[0]][size[1] + 1];
  srand(time(NULL));
  int r = rand() % size[1]; // +1

  // Fill background
  for (int i = 0; i < size[0]; i++) {
    for (int y = 0; y < size[1]; y++) {
      map[i][y] = symbol;
    }
    map[i][size[1]] = '\0';
  }

  printf("%d\n", spawn_timer_rock);
  // Spawn a rock
  if (spawn_timer_rock > SPAWN_DELAY_ROCK) {
    map[0][r] = SYMB_ROCK;
    spawn_timer_rock = 0;
  } else {
    spawn_timer_rock++;
  }

  Render everything
  if (to_print) {
    for (int i = 0; i < size[0]; i++) {
        printf("%s\n", map[i]);
    }
  }
}
