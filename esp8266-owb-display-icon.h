#include "esphome.h"

void drawIcon (int x, int y, int icon[10]) {
  for(int row = 0; row < 10; row++) {
	for(int col = 7; col >= 0; col--) {
	  if (bitRead(icon[row],col) == 1) {
		id(myDisplay).draw_pixel_at(x-col, y+row, COLOR_ON);
	  } else {
		id(myDisplay).draw_pixel_at(x-col, y+row, COLOR_OFF);
	  }
	}
  }
}
