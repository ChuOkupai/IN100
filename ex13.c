#include <uvsqgraphics.h>

void ligne_verticale(int x, int y)
{
	POINT p1, p2;
	
	p1.x = x / 2; p1.y = 0;
	p2.x = p1.x; p2.y = y;
	draw_line(p1, p2, white);
}

int main()
{
	POINT p;
	COULEUR c;
	
	init_graphics(640, 480);
	ligne_verticale(640, 480);
	p = wait_clic();
	c = (p.x < 320) ? blue : red;
	draw_circle(p, 25, c);
	wait_escape();
	return 0;
}
