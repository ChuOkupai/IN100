#include <uvsqgraphics.h>

int main()
{
	POINT p1, p2;
	int delta;
	
	init_graphics(640, 480);
	p1.x = 0;
	p1.y = 0;
	p2.x = p1.x;
	p2.y = 480;
	delta = 20;
	while (p1.x < 640)
	{
		draw_line(p1, p2, white);
		p1.x += delta;
		p2.x += delta;
	}
	p1.x = 0;
	p1.y = 0;
	p2.x = 640;
	p2.y = p1.x;
	while (p1.y < 480)
	{
		draw_line(p1, p2, white);
		p1.y += delta;
		p2.y += delta;
	}
	wait_escape();
	return 0;
}
