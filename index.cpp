#include <iostream>
#include <string>
#include <cmath>

bool king(int x1, int y1, int x2, int y2) {
	return abs(x2 - x1) == 1 && abs(y2 - y1) == 1;
}
