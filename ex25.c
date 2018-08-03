#include <uvsqgraphics.h>

int main()
{
	POINT p1, p2;
	
	init_graphics(640, 480);
	p1.x = 270;
	p1.y = 190;
	p2.x = p1.x + 100;
	p2.y = p1.y + 100;
	for (int clics = 0; clics < 10; clics++)
	{
		if (clics % 2)
			draw_fill_rectangle(p1, p2, white);
		else
			draw_rectangle(p1, p2, white);
		wait_clic();
		fill_screen(black);
	}
	wait_escape();
	return 0;
}
