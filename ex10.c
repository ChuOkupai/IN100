#include <uvsqgraphics.h>

int main()
{
	int a, b, c, d, e, f;
	
	init_graphics(640, 480);
	a = -9;
	b = -15;
	c = 6;
	d = a / b / c;
	e = (a / b) / c;
	f = a / (b / c);
	write_int(d);
	writeln();
	write_int(e);
	writeln();
	write_int(f);
	wait_escape();
	return 0;
}
