#include <uvsqgraphics.h>

int main()
{
	init_graphics(640, 480);
	write_int(42);
	wait_escape();
	return 0;
}
