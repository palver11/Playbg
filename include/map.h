#ifndef MAP_H

#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <time.h>


#define MAP_H

typedef char string[100];
typedef int vector2d[2];

void load_landscape(char symbol, vector2d size, bool to_print);

#endif // MAP_H