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
	POINT p1, p2;
	
	init_graphics(640, 480);
	ligne_verticale(640, 480);
	p1 = wait_clic();
	p2 = wait_clic();
	if ((p1.x < 320 && p2.x < 320) || (p1.x >= 320 && p2.x >= 320))
		draw_line(p1, p2, blue);
	wait_escape();
	return 0;
}
