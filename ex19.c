#include <uvsqgraphics.h>

void traits_verticaux(int x, int y)
{
	POINT p1, p2;
	
	p1.x = x / 3; p1.y = 0;
	p2.x = p1.x; p2.y = y;
	draw_line(p1, p2, white);
	p1.x += x / 3;
	p2.x = p1.x;
	draw_line(p1, p2, white);
}

int main()
{
	POINT p;
	COULEUR c;
		
	init_graphics(640, 480);
	traits_verticaux(640, 480);
	p = wait_clic();
	if (p.x < 213)
		c = blue;
	else if (p.x < 426)
		c = white;
	else
		c = red;
	draw_circle(p, 25, c);
	wait_escape();
	return 0;
}
