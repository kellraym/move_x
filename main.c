#include <stdio.h>
#include <conio.h>
#include "Structs/Grid.h"

int main() {
  Grid* g = make_grid(10);
  char c = ' ';
  while (c != 'q') {
    c = getch();
    move_o(g, c);
  }
  free(g);
  return 0;
}