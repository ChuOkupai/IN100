#include <uvsqgraphics.h>

int main()
{
	POINT p1, p2;
	COULEUR c;
	
	init_graphics(640, 480);
	p1.x = 100;
	p1.y = 0;
	p2.x = p1.x;
	p2.y = 480;
	while (p1.x < 640)
	{
		c = (p1.x / 100 % 2) ? red : blue;
		draw_line(p1, p2, c);
		p1.x += 100;
		p2.x += 100;
	}
	wait_escape();
	return 0;
}
