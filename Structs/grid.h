#include <stdint.h>
#include "grid.c"

typedef struct Grid Grid;

Grid* make_grid(uint8_t size);
static void print_grid(Grid* g);
void move_o(Grid* g, char c);