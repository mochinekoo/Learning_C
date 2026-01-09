#include <stdio.h>

struct Location {
	int x;
	int y;
};

int main() {
	printf("Hello, World!\n");

	struct Location loc;
	loc.x = 10;
	loc.y = 20;
	printf("Location: (%d, %d)\n", loc.x, loc.y);
	return 0;
}