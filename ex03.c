#include <uvsqgraphics.h>

int main()
{
	POINT p1, p2;
	int color;
	
	init_graphics(600, 400);
	p1.x = 0;
	p1.y = 0;
	p2.x = 0;
	p2.y = 400;
	while (p1.x <= 600)
	{
		draw_fill_rectangle(p1, p2, white);
		p1.x += 100;
		p2.x += 100;
	}
	wait_escape();
	
	init_graphics(400, 400);
	p1.y = 0;
	p2.y = 50;
	color = 0;
	while (p2.y <= 400)
	{
		p1.x = 0;
		p2.x = 50;
		while (p1.x <= 400)
		{
			if (color)
				draw_fill_rectangle(p1, p2, white);
			p1.x += 50;
			p2.x += 50;
			color = 1 - color;
		}
		p1.y += 50;
		p2.y += 50;
	}
	wait_escape();
	return 0;
}
