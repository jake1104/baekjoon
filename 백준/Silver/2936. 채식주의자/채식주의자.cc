#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	int ix, iy;
	scanf("%d %d", &ix, &iy);
	float rx, ry;
	if (ix + iy < 250) {
		if (ix == 0) {
			if (iy < 125) {
				rx = static_cast<float>(31250) / (250 - iy);
				ry = 250 - rx;
			}
			else if (iy == 125) {
				rx = 250;
				ry = 0;
			}
			else {
				rx = static_cast<float>(31250) / iy;
				ry = 0;
			}
		}
		else {
			if (ix < 125) {
				ry = static_cast<float>(31250) / (250 - ix);
				rx = 250 - ry;
			}
			else if (ix == 125) {
				ry = 250;
				rx = 0;
			}
			else {
				ry = static_cast<float>(31250) / ix;
				rx = 0;
			}
		}
	}
	else {
		if (ix < 125) {
			rx = -(static_cast<float>(31250) / iy) + 250;
			ry = 0;
		}
		else if (ix == 125) {
			rx = 0;
			ry = 0;
		}
		else {
			ry = -(static_cast<float>(31250) / ix) + 250;
			rx = 0;
		}
	}
	printf("%.2f %.2f", rx, ry);
}