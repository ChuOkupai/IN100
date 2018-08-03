#include <uvsqgraphics.h>

int main()
{
	int a, b;
	
	init_graphics(640, 480);
	a = (10 / 3) * 3;
	b = (10 * 3) / 3;
	write_int(a);
	writeln();
	write_int(b);
	wait_escape();
	return 0;
}
