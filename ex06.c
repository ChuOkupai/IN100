#include <uvsqgraphics.h>

int main()
{
	int a, b;
	
	init_graphics(640, 480);
	a = 21;
	b = a;
	a += 2;
	write_int(b);
	wait_escape();
	return 0;
}
