#include <uvsqgraphics.h>

int main()
{
	POINT p1, p2, user;
	int fill;
	
	init_graphics(640, 480);
	p1.x = 270;
	p1.y = 190;
	p2.x = p1.x + 100;
	p2.y = p1.y + 100;
	user = p1;
	fill = 0;
	while (user.x >= p1.x && user.y >= p1.y && user.x < p2.x && user.y < p2.y)
	{
		if (fill)
			draw_fill_rectangle(p1, p2, white);
		else
			draw_rectangle(p1, p2, white);
		fill = 1 - fill;
		user = wait_clic();
		fill_screen(black);
	}
	wait_escape();
	return 0;
}
