#include <uvsqgraphics.h>

int main()
{
	int a, b, c, d;
	
	init_graphics(640, 480);
	a = 2;
	b = 5;
	c = a / b;
	d = a % b;
	write_int(c);
	writeln();
	write_int(d);
	wait_escape();
	return 0;
}
