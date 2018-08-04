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
	POINT p[5];
	COULEUR c;
	int i;
	
	init_graphics(640, 480);
	ligne_verticale(640, 480);
	for (i = 0; i < 5; i++)
		p[i] = wait_clic();
	for (i = 0; i < 5; i++)
	{
		c = (p[i].x < 320) ? red : blue;
		draw_circle(p[i], 25, c);
	}
	wait_escape();
	return 0;
}
