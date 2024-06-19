#include <stdio.h>
#include <stdint.h>
#include <stdlib.h>

typedef struct Grid {
  uint8_t size;
  uint8_t x;
  uint8_t y;
} Grid;

static void print_grid(Grid* g) {
  system("cls");
  for (int i = 0; i < g->size; ++i) {
    for (int j = 0; j < g->size; ++j) {
      if (g->x == j && g->y == i) {
        printf("o");
      } else {
        printf("x");
      }
    }
    printf("\n");
  }
}

Grid* make_grid(uint8_t size) {
  Grid* g = malloc(sizeof(Grid));
  g->size = size;
  g->x = 0;
  g->y = 0;
  print_grid(g);
  return g;
}

void move_o(Grid* g, char c) {
  switch(c) {
    case 'w': if (g->y != 0) {
      g->y -= 1;
    }
      break;
    case 'a': if (g->x != 0) {
      g->x -= 1;
    }
      break;
    case 's': if (g-> y != g->size - 1) {
      g->y += 1;
    }
      break;
    case 'd': if (g->x != g->size - 1) {
      g->x += 1;
    }
      break;
  }
  print_grid(g);
  printf("\n%c", c);
}